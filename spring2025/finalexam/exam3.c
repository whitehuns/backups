#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int a;
    int b;
}STR;

int main()
{
    STR *arr[4];
    STR **ptr = arr;

    for(int i = 0; i < 4; i++){
        arr[i] = malloc(sizeof(STR));
        (*arr[i]).a = i+7;
        (**(ptr+i)).b = i + 3;
    }

    printf("%d\n", ptr[2]->a);
    printf("%d\n", (*(arr+3))->b);
    return 0;
}