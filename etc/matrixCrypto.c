#include <stdio.h>
#include <stdlib.h>

char* encrypt(char *arr);

int main()
{
    char *bfencrypt = calloc(2, sizeof(char));
    char *afencrypt = calloc(2, sizeof(char));
    printf("Enter two-letter word to encrypt: ");
    for(int i = 0; i < 2; i++){
        scanf(" %c", bfencrypt + i);
        getchar();
    }
    afencrypt = encrypt(bfencrypt);
    printf("The encrypted result is : %c%c\n", afencrypt[0], afencrypt[1]);
    return 0;
}

char* encrypt(char *arr){
    int matrix[2][2] = {{3, 2}, {5 ,7}};
    int encryptMat[2];
    encryptMat[0] = 'arr[0]' * 3 + 'arr[1]' * 5;
    encryptMat[1] = 'arr[0]' * 2 + 'arr[1]' * 7;
    for(int i = 0; i < 2; i++){
        while (encryptMat[i] > 26){
            encryptMat[i] = encryptMat[i] - 26;
        }
    }
    char *encryptDone = calloc(2, sizeof(char));
    encryptDone[0] = encryptMat[0];
    encryptDone[1] = encryptMat[1];
    return encryptDone;
}