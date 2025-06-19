#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size];
    int *pArr = arr;
    int size, search, location = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", pArr + i);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);
    while(*(pArr + location) != search){
        location++;
    }
    printf("%d is found at %d position.\n", search, location + 1);
    return 0;
}