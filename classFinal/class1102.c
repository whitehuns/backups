/*

Write a C Program to sum of Diagonal Elements in a Square Matrix Using Pointer and Function.

Requirements
- Receive an integer n from the user (the number of elements in the array).
- Write a function named sum_diagonals();
- You must use pointer arithmetic in some parts of your code.
- The main diagonal (top-left to bottom-right)

sample

Enter matrix size: 3
Enter 9 integers:
1 2 3
4 5 6
7 8 9

Main diagonal sum = 15
Total = 30

(3) = 1 5 9 (x : 0 4 8)
(4) = 1 6 11 16 (x : 0 5 10 15)

*/

#include <stdio.h>
#include <stdlib.h>

int sum_diagonals(int*, int);
int total_sum(int*, int);

int main()
{
    int n, size;
    printf("Enter matrix size: ");
    scanf("%d", &n);
    size = n * n;
    int *mat = malloc(size*sizeof(int));
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", mat + i);
    }
    printf("\nMain diagonal sum = %d\n", sum_diagonals(mat, n));
    printf("Total = %d", total_sum(mat, size));
    free(mat);
    return 0;
}

int sum_diagonals(int *mat, int n){
    int sum;
    for(int i = 0; i < n; i++){
        sum += *(mat + (n+1)*i);
    }
    return sum;
}

int total_sum(int *mat, int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += *(mat + i);
    }
    return total;
}










