#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int sum = 0;
    printf("Enter total number of elements: ");
    scanf("%d", &size);
    int *address = malloc(size*sizeof(int));
    printf("Enter %d elements: \n", size);
    for(int i = 0; i < size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", address+i);
        sum += *(address + i);
    }
    printf("Array elements are: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(address + i));
    }
    printf("\nSum of all elements: %d\n", sum);
    free(address);
    return 0;
}