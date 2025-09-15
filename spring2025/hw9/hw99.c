#include <stdio.h>

int main()
{
    int matA[3][3], matB[3][3];
    int *A = &matA[0][0];
    int *B = &matB[0][0];
    int result = 1;
    printf("Enter elements in matrix A of size 3x3:\n");
    for(int i = 0; i < 9; i++){
        scanf("%d", A + i);
    }
    printf("\n");
    printf("Enter elements in matrix B of size 3x3:\n");
    for(int i = 0; i < 9; i++){
        scanf("%d", B + i);
    }
    printf("\n");

    for(int i = 0; i < 9; i++){
        if(*(A + i) != *(B + i)){
            result = 0;
            break;
        }
    }
    
    if(result == 0){
        printf("Matrix A is not equal to Matrix B");
    }
    else{
        printf("Matrix A is equal to Matrix B");
    }
    return 0;
}
