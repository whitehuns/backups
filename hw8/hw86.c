#include <stdio.h>
#define max_size 100

int main()
{
    char str[max_size], reverse[max_size];
    char *pStr = str;
    char *pReverse = reverse;
    int len = 0;

    printf("Enter any string: ");
    gets(str);

    while (str[len] != '\0'){
        len++;
    }

    for(int i = 0; i < len; i++){
        *(pReverse + i) = *(pStr + len - 1 - i);
    }
    *(pReverse + len) = '\0';

    printf("Original string = %s\n", str);
    printf("Reversed string = %s\n", reverse);

    return 0;

}