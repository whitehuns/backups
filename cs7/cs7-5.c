
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;

    printf("Address of number is: %p\n", (void*)ptr);
    printf("First value: %d\n", *ptr);

    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}

