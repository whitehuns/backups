
#include <stdio.h>

void findMax(int arr[], int size, int *max) {
  *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
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

    int maxVal;
    findMax(arr, size, &maxVal);
    printf("Maximum value = %d\n", maxVal);

    return 0;
}

