
#include <stdio.h>

void Swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping: x = %d, y = %d\n", *a, *b);
}

int main() {
    int x, y;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &x, &y);

    int *ptr1 = &x;
    int *ptr2 = &y;

    Swap(ptr1, ptr2);

    return 0;
}

