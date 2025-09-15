#include <stdio.h>

int main()
{
    int arr[3][5], i, j, *p = *arr;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            arr[i][j] = i * 5 + j;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%s%12d", (j==0)?"\n":"", arr[i][j]);
        }
    }
    printf("\n");

    for(i = 0; i < 15; i++){
        printf("%s%12d", (i%5==0)?"\n":"", *(p+i));
    }
    printf("\n\n%12d%12d\n%12d%12d\n%12d%12d\n%12d%12d\n\n", **arr, **(arr+1), *(arr[0]+1), *(*arr+1), *(arr[1]+2), *(*(arr+1)+2), *(arr[2]+3), *(*(arr+2)+3));
    return 0;
}