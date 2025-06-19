#include <stdio.h>
#include <stdlib.h>

void reverseArray(int*, int);

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int *arr = malloc(size*sizeof(int));
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", arr + i);
    }
    reverseArray(arr, size);
    printf("Reversed array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}

void reverseArray(int *arr, int size){
    int reversed[size];
    for(int i = 0; i < size; i++){
        *(reversed + i) = *(arr + size - 1 - i);
    }
    for(int i = 0; i < size; i++){
        *(arr + i) = *(reversed + i);
    }
    return;
}