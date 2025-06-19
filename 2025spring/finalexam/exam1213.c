#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int *ptr, int size){
    int i, j, min;
    for(i = 0; i < size - 1; i++){
        min = i;
        for(j = i + 1; j <= size - 1; j++){
            if(*(ptr + j) < *(ptr + min)){
                min = j;
            }
        }
        if(min != i){
            swap(ptr + i, ptr + min);
        }
        for(int k = 0; k < size; k++){
            if(k == i || k == min){
                printf("[%2d] ", ptr[k]);
            }
            else{
                printf(" %2d  ", ptr[k]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int arr[6] = {23, 78, 45, 2 , 30, 56};
    for(int i = 0; i < 6; i++){
        printf(" %2d  ", arr[i]);
    }
    printf("\n");
    sort(arr, 6);
    return 0;
}