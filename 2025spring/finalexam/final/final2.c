#include <stdio.h>

int sum_border(int*, int);

int main()
{
    int n;
    while(1){
    printf("Enter size of array (nxn): ");
    scanf("%d", &n);
    if(n <= 10){
        break;
    }
    else{
        printf("The size should be less or equal to 10. Try again.\n");
    }
    }
    int arr[n*n];
    int *ptr = arr;
    printf("Enter %d elements:\n", n*n);
    for(int i = 0; i < n*n; i++){
         scanf("%d", ptr + i);
    }
    printf("Sum of border elements = %d\n", sum_border(ptr, n));
    return 0;
    
}

int sum_border (int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + *(arr + n*i);
    }
    for(int i = 0; i < n; i++){
        sum = sum + *(arr + n*i + n - 1);
    }
    for(int i = 0; i < n; i++){
        sum = sum + *(arr + i);
    }
    for(int i = 0; i < n; i++){
        sum = sum + *(arr + n*n -n + i);
    }
    sum = sum -(*(arr) + *(arr+n-1) + *(arr+n*n-n) + *(arr+n*n-1));
    return sum;
}
