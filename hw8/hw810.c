#include <stdio.h>
#define max_size 100

int compare(char*, char*);
int compare1(char*, char*);

int main()
{
    char str1[max_size], str2[max_size];
    char *pStr1 = str1;
    char *pStr2 = str2;
    int result;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    result = compare(str1, str2);
    
    if (result == 0){
        printf("Both strings are equal.\n");
    }
    else if (result < 0){
        printf("First string is lexicographically smaller than second.\n");
    }
    else{
        printf("First string is lexicographically greater than second.\n");
    }

    return 0;
}

int compare(char* pStr1, char* pStr2){
    int len1 = 0;
    int len2 = 0;
    int result = 0;
    while(*(pStr1 + len1) != '\0'){
        len1++;
    }
    while(*(pStr2 + len2) != '\0'){
        len2++;
    }
    int minlen = len1 < len2 ? len1 : len2;
    for (int i = 0; i < minlen; i++){
        if (*(pStr1 + i) == *(pStr2 + i)){
            continue;
        }
        else{
            result = *(pStr1 + i) - *(pStr2 + i);
            break;
        }
    }
    return result;
    
}

int compare1(char* pStr1, char* pStr2) {
    while (*pStr1 && *pStr2) {
        if (*pStr1 != *pStr2)
            return *pStr1 - *pStr2;
        pStr1++;
        pStr2++;
    }
    return *pStr1 - *pStr2;
}
