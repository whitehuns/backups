/*

Write a C Program to Delete an Element from a Dynamically Allocated Array

Requirements
- Receive an integer n from the user (the number of elements in the array).
- Dynamically allocates memory to store n integers
- Accept all elements of the array from user input.
- Write a function named delete_target() that removes the index of target.
- Display the result as follows

Sample

Enter number of elements: 5  
Enter 5 integers: 10 20 30 40 50  
Enter value to delete: 30  
Updated array: 10 20 40 50


*/

#include <stdio.h>
#include <stdlib.h>

void delete_target(int*, int);

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
    printf("Updated array: ");
    for(int i = 0; i < n-1; i++){
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}

void delete_target(int *arr, int n){
    int val, index;
    printf("Enter value to delete: ");
    scanf("%d", &val);
    for(int i = 0; i < n; i++){
        if(val == arr[i]){
            index = i;
        }
    }
    for(int i = index; i < n; i++){
        *(arr + i) = *(arr + i + 1);
    }
    arr = realloc(arr, (n-1)*sizeof(int));
    return;
}
















