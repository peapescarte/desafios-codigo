#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Swap(int* a, int* b){
	int swapper;
	swapper = *a;
	*a = *b;
	*b = swapper;
} 

void Array_Create(int** array, int size){
	(*array) = (int*)malloc(size * sizeof(int));
}

void Array_Fill_Random(int* array, int size){
	for(int i = 0; i < size; i++){
		array[i] = rand() % 501;
	}
}

void Array_Print(int* array, int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int Quicksort(int* array, int start, int last, int size) {
	if (start >= last) {
		return 0;
	}
	int pivot = start;
	int lesser = last;
	for (int i = last; i > start; i--) {
		if (array[pivot] <= array[i]) {
			Swap(&array[i], &array[lesser]);
			lesser--;
		}
	}
	Swap(&array[pivot], &array[lesser]);
	Quicksort(array, start, lesser - 1, size);
	Quicksort(array, lesser + 1, last, size);
}

int main(){
	srand(clock());
	int* array = NULL;
	int size;
	
	size = rand() % 101;
	Array_Create(&array, size);
	Array_Fill_Random(array, size);
	
	printf("Current array:\n");
	Array_Print(array, size);
	
	Quicksort(array, 0, size - 1, size);

	printf("Sorted array:\n");
	Array_Print(array, size);

	printf("smallest: %d largest: %d\n", array[0], array[size - 1]);

	free(array);
	return 0;
}
