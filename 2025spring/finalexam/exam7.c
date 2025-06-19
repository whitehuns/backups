#include <stdio.h>

int main()
{
    int *arr[2];
    int **ptr = arr;

    int ARR[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};

    arr[0] = ARR[0];
    arr[1] = ARR[1];

    printf("%d\n", *(*(ptr + 1) + 3));
    printf("%d\n", *(*arr + 5));

    return 0;
}