#include <stdio.h>
#include <stdlib.h>

void Array_Create(char** string, int size){
	(*string) = (char*)malloc(size * sizeof(char));
}

void Array_Initialize(char* string, int size){
	for(int i = 0; i < size; i++){
		string[i] = '.';
	}
}

void Array_Print(char* string, int size){
	for(int i = 0; i < size; i++){
		printf("%c", string[i]);
	}

	printf("\n");
}

int Is_Punctuation(char character){
	switch (character){
		case ' ':
			return 1;
		case '.':
			return 1;
		case '!':
			return 1;
		case '?':
			return 1;
		case ',':
			return 1;
		case ':':
			return 1;
		case ';':
			return 1;
		case '(':
			return 1;
		case ')':
			return 1;
		case '-':
			return 1;
		case '"':
			return 1;
	}
	return 0;
}

int String_Length(char* string, int size){
	for(int i = 0; i < size; i++){
		if(string[i] == '\n' || string[i] == EOF){
			return i;
		}
	}
	return size;
}

int String_Clean(char* dirty, char* clean, int size_dirty){
	int j = 0;
	for(int i = 0; i < size_dirty; i++){
		if(!Is_Punctuation(dirty[i])){
			if(dirty[i] >= 65 && dirty[i] <= 90){
				clean[j] = dirty[i] + 32;
				j++;
			}
			else if(dirty[i] != '\0'){
				clean[j] = dirty[i];
				j++;
			}
		}
	}

	return j;
}

void Is_Palindrome(char* string, int size){
	int j = size - 1;
	for(int i = 0; i <= j; i++){
		if(string[i] != string[j]){
			printf("Not a palindrome\n");
			return;
		}
		else{
			j--;
		}
	}
	printf("Is a palindrome\n");
}

int main(){
	char* clean = NULL;
	char* string_a = NULL;
	int size_a, size_clean = 0;
	int buffer_size = 101;

	Array_Create(&string_a, buffer_size);
	Array_Initialize(string_a, buffer_size);

	printf("Type something for the program (up to 100 characters)\n");
	fgets(string_a, buffer_size, stdin);

	size_a = String_Length(string_a, buffer_size);
	
	Array_Create(&clean, size_a);
	Array_Initialize(clean, size_a);

	size_clean = String_Clean(string_a, clean, size_a);
	Array_Print(clean, size_clean);
	
	Is_Palindrome(clean, size_clean);
	return 0;
}
