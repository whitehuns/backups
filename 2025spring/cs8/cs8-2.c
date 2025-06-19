#include <stdio.h>

void sumArray(int arr[], int size, int *sum) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }
}

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sumVal;
    sumArray(arr, size, &sumVal);
    printf("Sum = %d\n", sumVal);

    return 0;
}

