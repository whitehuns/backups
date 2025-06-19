#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int*)malloc(sizeof(int));
    char *b= (char*)malloc(sizeof(char));
    float *c = (float*)malloc(sizeof(float));
    printf("Enter integer value: ");
    scanf("%d", a);
    printf("Enter character value: ");
    scanf(" %c", b);
    printf("Enter float value: ");
    scanf("%f", c);
    printf("Inputted value are: %d, %c, %.2f\n", *a, *b, *c);
    free(a);
    free(b);
    free(c);
    return 0;
}