#include <stdio.h>

void rotateMatrix(int (*arr)[4], int (*result)[4]);

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int (*ARR)[4] = arr;
    int result[4][4];
    int(*RESULT)[4] = result;
    rotateMatrix(ARR, RESULT);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void rotateMatrix(int (*arr)[4], int(*result)[4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            result[3 - i][j] = arr[j][i]; 
        }
    }
    return;
}

