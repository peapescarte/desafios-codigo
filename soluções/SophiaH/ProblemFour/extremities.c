#include <stdio.h>

int main() {
	int size = 5;
	int array[5] = {-7, 9, 0, -5, 7};
	int maior = array[0], menor = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] > maior) {
			maior = array[i];
		} else if (array[i] < menor) {
			menor = array[i];
		}
	}

	printf("Maior: %d\nMenor: %d", maior, menor);

	return 0;
}
