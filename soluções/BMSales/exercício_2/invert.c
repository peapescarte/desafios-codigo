#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Swap(char* a, char* b){
	char swapper;
	swapper = *a;
	*a = *b;
	*b = swapper;
}

void Array_Create(char** string, int size){
	(*string) = (char*)malloc(size * sizeof(char));
}

void Array_Print(char* string, int size){
	for(int i = 0; i < size; i++){
		printf("%c", string[i]);
	}
	printf("\n");
}

void Array_Fill(char* string, int size){
	for(int i = 0; i < size; i++){
		string[i] = 122 - (rand() % 26);
	}
}

void Array_Invert(char* string, int size){
	int j =	size - 1;
	for(int i = 0; i <= j; i++){
		Swap(&string[i], &string[j]);
		j--;
	}
}

int main(){
	srand(clock());
	int size = (rand() % 10) + 1 ;
	char* string = NULL;

	Array_Create(&string, size);
	Array_Fill(string, size);

	printf("Current string:\n");
	Array_Print(string, size);
	
	Array_Invert(string, size);

	printf("Inverted string\n");
	Array_Print(string, size);
	
	free(string);
	return 0;
}
