#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void Array_Create(int** array, int size){
	(*array) = (int*)malloc(size * sizeof(int));
}

void Array_Fill_Random(int* array, int size){
	for(int i = 0; i < size; i++){
		array[i] = rand() % 16;
	}
}

void Array_Print(int* array, int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void Array_Square(int* array_a, int* array_b, int size){
	for(int i = 0; i < size; i++){
		array_b[i] = array_a[i] * array_a[i];
	}
}

int main(){
	srand(clock());
	int* array_a = NULL;
	int* array_b = NULL;
	int size = rand() % 11;
	
	Array_Create(&array_a, size);
	Array_Create(&array_b, size);
	Array_Fill_Random(array_a, size);

	printf("Current array:\n");
	Array_Print(array_a, size);

	printf("Applying f(x) = x^2 to all values:\n");
	Array_Square(array_a, array_b, size);
	Array_Print(array_b, size);
	
	return 0;
}
