#include <stdio.h>

int main()
{
    int arr[][4] = {{0, 5, 1}, {4, 10, 8}, {7, 9, 3}, {6, 11, 2}};
    int a = 2;
    int b = 4;
    
    int *p = &a;
    int *q = &b;

    char *arr2[7] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};

    printf("Address of arr: %d\n", arr);

    printf("1) %d, 2) %d, 3) %d \n", arr[2][1], *(arr[3]+1), *(&arr[1][1] + 1));
    printf("1) %d, 2) %d, 3) %d \n", &arr[2][1], arr[3]+1, (&arr[1][1] + 1));

    printf("%d\n", **&q);
    printf("%d\n", 7 * *p / *q + 7);

    printf("%s\n", *(arr2 + 1));
    printf("%c\n", *(arr2[2] + 2));
    printf("%s\n", arr2[3] + 3);
    return 0;
}