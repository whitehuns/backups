#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 50;
    char *arr = calloc(size, sizeof(char));
    printf("Enter the string: ");
    scanf(" %[^\n]", arr);
    getchar();
    printf("%s\n", arr);
    free(arr);
    return 0;
}