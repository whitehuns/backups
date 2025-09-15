#include <stdio.h>

int main()
{
    char arr[] = "Information systems";
    char *ptr = NULL;
    char **Dptr = NULL;

    ptr = arr;
    Dptr = &ptr;

    *(ptr + 4) = 'A';
    *(*Dptr + 6) = '\0';

    printf("%s\n", *Dptr);
    return 0;
}