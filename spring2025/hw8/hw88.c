#include <stdio.h>
#define max_size 100

int main()
{
    char str[max_size];
    char *pStr = str;
    int count = 0;

    printf("Enter any string: ");
    gets(str);
    while(*(pStr + count) != '\0'){
        count++;
    }

    printf("Length of '%s' = %d", str, count);
    return 0;
}