#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter total number of elements: ");
    scanf("%d", &size);
    int *arr = malloc(size*sizeof(int));
    for(int i = 0; i < size; i++){
        scanf("%d", arr + i);
    }
    int smallest = *(arr);
    for(int i = 1; i < size; i++){
        if(*(arr + i) < smallest){
            smallest = *(arr + i);
        }
    }
    printf("Smallest element is %d\n", smallest);
    free(arr);
    return 0;
}