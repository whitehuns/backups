#include <stdio.h>
#define max_size 100

int main()
{
    char str1[max_size], str2[max_size];
    char *pStr1 = str1;
    char *pStr2 = str2;
    int len1 = 0;
    int len2 = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while(*(pStr1 + len1) != '\0'){
        len1++;
    }
    while(*(pStr2 + len2) != '\0'){
        len2++;
    }
    *(pStr1 + len1) = ' ';
    for(int i = 0; i < len2; i++){
        *(pStr1 + len1 + 1 + i) = *(pStr2 + i);
    }
    printf("Concatenated String = %s", str1);
    return 0;
}