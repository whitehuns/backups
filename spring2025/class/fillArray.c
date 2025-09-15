#include <stdio.h>
#include <stdlib.h>

void fillArray(int*, int, int);

int main()
{
    int size, value;
    printf("Enter array size: ");
    scanf("%d",&size);
    int *arr = malloc(size*sizeof(int));
    printf("Enter value to fill: ");
    scanf("%d", &value);
    fillArray(arr, size, value);
    printf("Filled array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    return 0;
}

void fillArray(int arr[], int size, int value){
    for(int i = 0; i < size; i++){
        *(arr + i) = value;
    }
    return;
}