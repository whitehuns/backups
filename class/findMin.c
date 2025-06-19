#include <stdio.h>
#include <stdlib.h>

int* find_min(int*, int);

int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int *arr = malloc(size*sizeof(int));
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", arr + i);
    }
    int *minimum = find_min(arr, size);
    printf("The smallest element is: %d\n", *minimum);
    free(arr);
    free(minimum);
    return 0;
}

int* find_min(int *arr, int size){
    int *min = malloc(sizeof(int));
    for(int i = 0; i < size; i++){
        if(*(arr + i) < *min){
            *min = *(arr +i);
        }
    }
    return min;
}