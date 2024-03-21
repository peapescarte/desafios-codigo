#include <stdio.h>

void generateFibonacciNumbers (int number) {

    int fibonacciSequence [100] = {0, 1};

    for (int i = 0; i < number; i++) {

        if (i > 1) 
            fibonacciSequence [i] = fibonacciSequence [i - 1] + fibonacciSequence [i - 2];

        printf ("%d ", fibonacciSequence [i]);
    }

    printf ("\n");
}

int main () {

    generateFibonacciNumbers (10);

    return 0;
}