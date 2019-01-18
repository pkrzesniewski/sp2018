
#include "stdafx.h"
#define INPUT_SIZE (133000)

int main()
{
	char input[133000] = "aAbbDd";
	// inicjalizacja wyniku output
	char output[INPUT_SIZE];
	int o = 0;

	//iteracja do przedostatniego elementu tablicy 
	//(poniewa¿ porównujemy obecny element z kolejnym)
	for (int i = 0; i < INPUT_SIZE-1; i++) {
		if (IsReacting(input[i], input[i + 1])) {
			i++;

		}
		else {
			output[o] = input[i];
			o++;

		}
	}
    return 0;
}

char[] React(char[] input) {
	
}

bool IsReacting(char first, char second) {
	if (first + 32 == second || second + 32 == first) {
		return true;
	}
	else {
		return false;
	}
}
