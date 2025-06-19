#include <stdio.h>

int main()
{
    int p, q;
    int *a = &p;
    int *b = &q;
    printf("Enter any two numbers: ");
    scanf("%d %d", a, b);
    printf("Sum = %d", *a + *b);
    return 0;
}