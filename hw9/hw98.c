#include <stdio.h>

int main()
{
    int matA[3][3], matB[3][3], matC[3][3];
    int i, j;
    printf("Enter elements in matrix A of size 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter elements in matrix B of size 3x3:\n");
    for(i = 0; i < 9; i++){
          scanf("%d", &matB[0][0] + i);
        }
//2차원 배열에서 배열이름은 주소지만, 열 단위의 주소임 mat + 1 -> 다음 줄
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printf("Sum of matrices A+B =\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}