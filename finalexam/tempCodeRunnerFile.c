#include <stdio.h>

int main()
{
    char a[] = "0123456789";
    char b[5];
    a[5] = '\0';
    char *c = a;
    for(int i = 0, j = sizeof(b)/sizeof(char); i<j; i++){
        *(b+i) = *(c+(7-i));
    }

    printf("%lu\n", sizeof(a)/sizeof(char));
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%c\n", *(b+3));

    return 0;
}
