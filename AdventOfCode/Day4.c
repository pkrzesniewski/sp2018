#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>

#define NELEMS(array) (sizeof(array)/sizeof((array)[0]))

#define STRLEN(literal) (sizeof(literal)-1)

char *read_line(FILE *file) {
	char *line = malloc(1024);
	fgets(line, 1024, file);
	if (strlen(line) == 0) {
		free(line);
		return NULL;
	}
	return line;
}

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

typedef struct {
	char **lines;
	int size;
} lines_t;

lines_t read_lines(FILE *input) {
	lines_t result = {
		.lines = NULL,
		.size = 0
	};
	int lines_allocated = 0;
	char *line;
	while ((line = read_line(input)) != NULL) {
		if (result.size + 1 > lines_allocated) {
			lines_allocated = max(1, 2 * lines_allocated);
			result.lines = realloc(result.lines, 
					lines_allocated * sizeof(char *));
			assert (result.lines != NULL);
		}
		result.lines[result.size] = line;
		++result.size;
	}
	return result;
}

typedef int (*compare)(const void *, const void *);

int cmpstr(const char **a, const char **b) {
	return strcmp(*a, *b);
}

#define IS_PREFIX(prefix, string) !strncmp(prefix, string, STRLEN(prefix))


typedef struct {
	int minutes_slept[60];
	int time_slept;
} GuardSleepInfo;

int sleepestguard(lines_t data) {
	qsort(data.lines, data.size, sizeof(char *), (compare) cmpstr);
	int allocated_guard_ids = 0;
	int current_guard_id;
	GuardSleepInfo **guard_info = NULL;

	int sleep_minute;	
	for (int i = 0; i < data.size; ++i) {
		int year, month, day, hour, minute;
		sscanf(data.lines[i], "[%d-%d-%d %d:%d]", &year, &month, &day, &hour, &minute);
		char *message = data.lines[i] + STRLEN("[YYYY-MM-DD hh:mm] ");
		if (IS_PREFIX("wakes up", message)) {
			assert(guard_info[current_guard_id] != NULL);
			while (sleep_minute != minute) {
				guard_info[current_guard_id]->minutes_slept[sleep_minute]++;
				guard_info[current_guard_id]->time_slept++;
				sleep_minute = (sleep_minute + 1) % 60;
			}

		}
		else if (IS_PREFIX("falls asleep", message)) {
			sleep_minute = minute;
		}
		else {
			sscanf(message, "Guard #%d begins shift", &current_guard_id);
			if (current_guard_id >= allocated_guard_ids) {
				guard_info = realloc(guard_info, (current_guard_id+1)*sizeof(GuardSleepInfo *));
				assert (guard_info != NULL);
				for (int j = allocated_guard_ids; j <= current_guard_id; ++j) {
					guard_info[j] = NULL;
				}
				allocated_guard_ids = current_guard_id + 1;
			}
		        if (guard_info[current_guard_id] == NULL) {
				guard_info[current_guard_id] = (GuardSleepInfo *) calloc(1, sizeof(GuardSleepInfo));	
			}
			assert(guard_info[current_guard_id] != NULL);
		}
	}

	int guard_sleepest = 0;
	int longest_sleep = 0;
	for (int i = 0; i < allocated_guard_ids; ++i) {
		if (guard_info[i] == NULL) {
			continue;
		}
		if (guard_info[i]->time_slept > longest_sleep) {
			longest_sleep = guard_info[i]->time_slept;
			guard_sleepest = i;
		}
	}

	int most_frequent_minute = 0;
	int minute_frequency = 0;
	for (int i = 0; i < 60; ++i) {
		if (guard_info[guard_sleepest]->minutes_slept[i] > minute_frequency) {
			most_frequent_minute = i;
	       		minute_frequency = guard_info[guard_sleepest]->minutes_slept[i];
		}
	}	
 	printf("%d\n", most_frequent_minute*guard_sleepest);
	return most_frequent_minute*guard_sleepest;

}


int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Uzycie: %s plik_wejsciowy\n", argv[0]);
		return -1;
	}
	FILE *input = fopen(argv[1], "r");
	assert (input);
	lines_t data = read_lines(input);
	fclose(input);
	return sleepestguard(data);
}

