#include <stdio.h>
#include <stdlib.h>

int matrices_equal(int*, int*, int, int);

int main()
{
    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int *pMat1 = malloc(row*column*sizeof(int));
    int *pMat2 = malloc(row*column*sizeof(int));
    printf("Enter elements of Matrix 1: \n");
    for(int i = 0; i < row*column; i++){
        scanf("%d", pMat1 + i);
    }
    printf("Enter elements of Matrix 2: \n");
    for(int i = 0; i < row*column; i++){
        scanf("%d", pMat2 + i);
    }
    if(matrices_equal(pMat1, pMat2, row, column) == 1){
        printf("The matrices are not equal.\n");
    }
    else{
        printf("The matrices are equal.\n");
    }
    return 0;
}

int matrices_equal(int *mat1, int *mat2, int rows, int cols){
    for(int i = 0; i < rows*cols; i++){
        if(*(mat1 + i) != *(mat2 + i)){
            return 1;
        }
    }
    return 0;
}