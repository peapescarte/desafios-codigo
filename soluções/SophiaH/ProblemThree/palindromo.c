#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* punctuation(char* input) {
	char* tmp = input, *start = input;
	do {
		while (ispunct(*tmp)) {
			tmp++;
		}
	} while (*input++ = *tmp++);
	input = start;
	return input;
}

char* spaces(char* input) {
	char* tmp = input, *start = input;
	do {
        	while (*tmp == ' ') {
            		++tmp;
        	}
    	} while (*input++ = *tmp++);
	input = start;
	return input;
}

char* lower(char* input) {
	char* tmp = input;
	for (; *input; ++input) {
		*input = tolower(*input);
	}
	input = tmp;
	return input;
}

void Injector(char* inputs, char* function(char* input)) {
	inputs = function(inputs);
	return;
}

int isPalindrome(char* inputs) {
	int len_a = 0; 
	int len_b = strlen(inputs) - 1;
	
	for (int i = len_a, j = len_b; i < j; i++, j--) {
		if (inputs[i] != inputs[j]) {
			printf("%d:%c != %d:%c", i, inputs[i], j, inputs[j]);
			return 0;
		}	
	}
	return 1;
}

int main() {
	char* inputs = calloc(50, sizeof(char));
	
	fgets(inputs, 50, stdin);

	char* pos;
	if ((pos=strchr(inputs, '\n')) != NULL) {
		*pos = '\0';
	}

	Injector(inputs, lower);
	Injector(inputs, spaces);
	Injector(inputs, punctuation);

	puts(inputs);

	if (isPalindrome(inputs)) {
		printf("The input is a palindrome");
		return 0;
	} 
	printf("The input is not a palindrome");
	return 0;
}
