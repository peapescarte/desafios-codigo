#include <stdio.h>
#include <stdlib.h>

float calcQuadratico(float* arg)
{
    return (*arg) * (*arg);
}

void mapArray(float *arr, int n, float (*calcFunction)(float* arg))
{
    int i = 0;
    
    for(i = 0; i < n; i++)
        arr[i] = calcFunction(&arr[i]);
}

float* mapNewArray(float *originalArr, int n, float (*calcFunction)(float* arg))
{
    int i = 0;
    float * arr = (float *) malloc(sizeof(float) * n);
    for(i = 0; i < n; i++)
        arr[i] = calcFunction(&originalArr[i]);
    
    return arr;
}
void printArray(float *arr, int n)
{
    int i = 0;
    printf("\n");
    for(i = 0; i < n; i++)
        printf("%.f ", arr[i]);
}

int main()
{
    float arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array Original");
    printArray(arr, n);
    
    float* newArray = mapNewArray(arr, n, calcQuadratico);
    mapArray(arr, n, calcQuadratico);
    
    printf("\n\nArray Original Modificada");
    printArray(arr, n);
    
    printf("\n\nArray Nova");
    printArray(newArray, n);
    
    free(newArray);
    return 0;
}