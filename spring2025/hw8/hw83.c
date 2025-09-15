#include <stdio.h>

void swap(int*, int*);

int main()
{
    int num1, num2;
    int *pNum1 = &num1;
    int *pNum2 = &num2;
    printf("Enter two numbers: ");
    scanf("%d %d", pNum1, pNum2);
    printf("Before swapping in main value of num1 = %d\n", *pNum1);
    printf("Value of num2 = %d\n", *pNum2);
    swap(pNum1,pNum2);
    printf("After swapping in swap function Value of num1 = %d\n", *pNum1);
    printf("Value of num2 = %d\n", *pNum2);
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}