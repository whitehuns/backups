/* 

Write a C Program to find average all elements in a 1D array using pointer and function 

Requirements
- Receive an integer n from the user (the number of elements in the array).
- Write a function named average_elements() that find average from all elements in the array.
- You must use pointer arithmetic in some parts of your code.
- Display the average.

Sample

Enter number of elements: 5
Enter 5 integers:
1 2 3 4 5
Average = 3.00

*/

#include <stdio.h>
#include <stdlib.h>

float average_elements(int*, int);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = malloc(n*sizeof(int));
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    printf("Average = %.2f\n", average_elements(arr, n));
    free(arr);
    return 0;
}

float average_elements(int *arr, int size){
    float avg;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
    }
    avg = sum / size;
    return avg;
}