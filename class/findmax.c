#include <stdio.h>

void findMax(int*, int, int*);

int main()
{
    int size, max;
    int *pMax = &max;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d numbers: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", arr + i);
    }
    max = *arr;
    findMax(arr, size, pMax);
    printf("Maximum value = %d\n", max);
    printf("Input array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    return 0;
}

void findMax(int arr[], int size, int *max){
    for(int i = 0; i < size; i++){
        if(*(arr + i) > *max){
            *max = *(arr + i);
        }
    }
    return;
}

