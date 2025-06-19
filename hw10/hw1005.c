#include <stdio.h>

int main()
{
    typedef struct 
    {
        int a;
        int b;
        char arr[32];
    }STRUCTURE;
    typedef union 
    {
        int a;
        int b;
        char arr[32];
    }UNIONS;

    STRUCTURE structure1;
    UNIONS union1;

    printf("size of union: %lu bytes\n", sizeof(union1));
    printf("size of structure: %lu bytes\n", sizeof(structure1));

    return 0;
}