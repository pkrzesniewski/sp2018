// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define INPUT_LINES (1108)


//char** tablica tablic znaków
char** get_input()
{
	//inicjalizacja tablicy stringów
	char** input = (char**)malloc(INPUT_LINES * sizeof(char*));
	FILE *input_file;
	//otwarcie pliku z inputem
	input_file = fopen("inputlines.txt", "r");
	if (input_file == NULL)
	{
		printf("Error reading file");
		return input;
	}
	//inicjalizacja zmiennych pomocniczych (char*-tablica znaków/string(³añcuch znaków))
	char line[100];
	int i = 0;
	//wczytanie kolejnej linii z pliku jako stringa(%s) i zapisanie do zmiennej line 
	// [1518-04-30 00:55] wakes up
	while (fscanf(input_file, "%s ", &line) != EOF)
	{
		//zapisujesz linie jako i-ty element tablicy stringów
		input[i] = line;
		i++;
	}
	fclose(input_file);
	return input;
}

static int my_compare(const void* a, const void* b)
{
	return strcmp(*(const char**)a, *(const char**)b);
}


void sort(char** arr, int n)
{
	qsort(arr, n, sizeof(const char*), my_compare);
}



int main()
{
	//wczytanie tablicy tablic znaków z pliku i zapisanie do zmiennej input
	char** input = get_input();
	//sortowanie tablicy
	sort(input, INPUT_LINES);
	for (int i = 0; i < INPUT_LINES; i++)
	{
		printf(input[i] + '\n');
	}
	//scanf("%c");
    return 0;
}
