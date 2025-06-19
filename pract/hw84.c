#include <stdio.h>
#include <stdlib.h>

void swapArray(int**, int**);
void printArray(int*, int);

int main()
{
    int size1, size2;
    printf("Enter size of source array: ");
    scanf("%d", &size1);
    printf("Enter size of destination array: ");
    scanf("%d", &size2);
    int *sarr = malloc(size1*sizeof(int));
    int *darr = malloc(size2*sizeof(int));
    printf("Enter %d elements in source array: ", size1);
    for(int i = 0; i < size1; i++){
        scanf("%d", sarr + i);
    }
    printf("Enter %d elements in destination array: ", size2);
    for(int i = 0; i < size2; i++){
        scanf("%d", darr + i);
    }
    printf("\n\n");
    printf("Source array before swapping : ");
    printArray(sarr, size1);
    printf("Destination array before swapping : ");
    printArray(darr, size2);
    printf("\n");
    swapArray(&sarr, &darr);
    printf("Source array after swapping : ");
    printArray(sarr, size2);
    printf("Destination array after swapping : ");
    printArray(darr, size1);
    free(sarr);
    free(darr);
    return 0;
}

void swapArray(int **p_sarr, int **p_darr){
    int *temp;
    temp = *p_sarr;
    *p_sarr = *p_darr;
    *p_darr = temp;
    return;
}

void printArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return;
}