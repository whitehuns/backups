/*

Write a C Program to Count Even and Odd Numbers Using Dynamic Memory Allocation

Requirements
- Receive an integer n from the user (the number of elements in the array).
- Dynamically allocates memory to store n integers
- Accept all elements of the array from user input.
- Write a function named count_even_odd() that Counts how many numbers are even and how many are odd
- Display the result as follows


Sample:

Enter number of elements: 7
Enter 7 integers: 1 2 3 5 6 7 9
Even numbers = 2
Odd numbers = 5


*/

#include <stdio.h>
#include <stdlib.h>

void count_even_odd(int*, int);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = malloc(n*sizeof(int));
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    count_even_odd(arr, n);
    free(arr);
    return 0;
}

void count_even_odd(int *arr, int n){
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    return;
}








