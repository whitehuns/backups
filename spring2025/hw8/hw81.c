#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    for(int i = 0; i < 5; i++){
        *(p + i) += 2;
    }
    for(int i = 0; i < 5; i++){
        printf("%d value in the %dth array: %d\n", i, i+1, *(p+i));
    }
    return 0;
}