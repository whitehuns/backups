#include <stdio.h>
int main() {
    char arr[]="I am a student";
    char *ptr=NULL;
    char **Dptr=NULL;

    ptr = &arr; 
    Dptr = &ptr;

    printf("%c \n", **Dptr);
    return 0;
}