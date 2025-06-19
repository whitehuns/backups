
#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements in the array:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    printf("Elements in array are: ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
