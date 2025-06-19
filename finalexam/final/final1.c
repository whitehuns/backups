#include <stdio.h>

int multiply_elements(int*, int);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i);
    }
    printf("Product of all elements = %d\n", multiply_elements(ptr, n));
    return 0;
}

int multiply_elements(int *arr, int n){
    int product = arr[0];
    for(int i = 1; i < n; i++){
        product = product * *(arr + i);
    }
    return product;
}
