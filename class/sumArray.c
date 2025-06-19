#include <stdio.h>
#include <stdlib.h>

int *sumArray(int*, int);

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d number of elements: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", arr + i);
    }
    int *sum = sumArray(arr, size);
    printf("Sum = %d", *sum);
    free(sum);
    return 0;
}

int *sumArray(int arr[], int size){
    int *sum = malloc(sizeof(int));
    *sum = 0;
    for(int i = 0; i < size; i++){
        *sum += *(arr + i);
    }
    return sum;
}