#include <stdio.h>
#define max_size 100

int main()
{
    typedef union 
    {
        char arr[max_size];
    }CHARION;
    CHARION string;
    CHARION *p_string = &string;
    char henry[] = "Henry Wong";
    for(int i = 0; i < 11; i++){
        if(henry[i] != '\0'){
            string.arr[i] = henry[i];
        }
    }
    string.arr[11] = '\0';
    printf("Pointer: Show a pointer to union : \n");
    printf("----------------------------------\n");
    printf("%s %s\n", string.arr, (*p_string).arr);
    return 0;
    
}