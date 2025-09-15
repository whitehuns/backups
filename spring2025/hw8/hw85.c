#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size];
    int size;
    int *pArr = arr;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", pArr + i);
    }
    printf("Array Elements: ");
    for(int i = 0; i < size; i++){
        printf("%d, ", *(pArr + i));
    }
    return 0;
}