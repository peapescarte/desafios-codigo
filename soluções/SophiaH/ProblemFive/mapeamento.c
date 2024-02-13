#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* mapear(int* array, int size) {
	int* tmp = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++) {
		tmp[i] = pow(array[i], 2);
	}
	return tmp;
}

void printArr(int* array, int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	} printf("\n");
	return;
}

void getInts(int* arr, int size) {
	int value = 0;
	for (int i = 0; i < size; i++) {
		scanf("%d", &value);
		arr[i] = value;
	}
	return;
}

int main() {
	int size = 0, *tmp, *array_b;
	int* array_a = (int*)calloc(size, sizeof(int));
	
	printf("Size of array to map: ");
	scanf("%d", &size);
	getInts(array_a, size);
	
	tmp = mapear(array_a, size);
	array_b = tmp;
	
	printArr(array_a, size);
	printArr(array_b, size);
	return 0;
}
