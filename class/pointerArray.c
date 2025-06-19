#include <stdio.h>
#include <stdlib.h>

void scanArray(int*, int);
void printArray(int*, int);

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int *arr = calloc(size, sizeof(int));
    scanArray(arr, size);
    printArray(arr, size);
    free(arr);
    return 0;
}

void scanArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int *arr, int size){
    printf("The elements of array are : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return;
}