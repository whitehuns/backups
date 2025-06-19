#include <stdio.h>

int main()
{
    int arr[][4] = {1, 2, 3, 4, 5, 6, 7};
    int (*ptr)[4] = arr;

    for(int i = 0; i < sizeof(arr) / sizeof(arr[i]); i++){
        for(int j = 0; j < 3; j++){
            *(*(arr+i)+j) += 9;
            if(*(ptr+i)[j] >= sizeof(arr[i])/sizeof(int)){
                printf("%d\n", *(*(ptr + i)+j));
            }
        }
        
    }

    return 0;
}