#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maxSize;
    printf("Enter limit of the text: ");
    scanf("%d", &maxSize);
    getchar();
    char *arr = (char*)malloc(maxSize*sizeof(char));
    printf("Enter text: ");
    gets(arr);
    printf("Inputted text is: %s\n", arr);
    free(arr);
    return 0;
}