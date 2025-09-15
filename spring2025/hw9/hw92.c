#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter the total number of elements: ");
    scanf("%d", &size);
    float *arr = (float*) calloc(size, sizeof(float));
    for(int i = 0; i < size; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%f", arr+i);
    }
    float largest = *arr;
    for(int i = 1; i < size; i++){
        if(*(arr + i) > largest){
            largest = *(arr + i);
        }
    }
    printf("Largest number = %.2f\n", largest);
    free(arr);
    return 0;
}