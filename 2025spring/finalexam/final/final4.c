#include <stdio.h>
#include <stdlib.h>

void count_signs(int*, int);

int main()
{
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = malloc(n*sizeof(int));
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    count_signs(arr, n);
    free(arr);
    return 0;
}

void count_signs(int *arr, int n){
    int pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) > 0){
            pos++;
        }
        else if(*(arr + i) < 0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Zero = %d\n", zero);
    return;
}
