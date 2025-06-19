#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    char *arr = calloc(100, sizeof(char));
    printf("Enter any string: ");
    scanf("%[^\n]", arr);
    for(int i = 0; ; i++){
        if(arr[i] != '\0'){
            count++;
        }
        else{
            break;
        }
    }
    printf("Original string = %s\n", arr);
    printf("Reverse string = ");
    for(int i = count; i >= 0; i--){
        printf("%c", *(arr + i));
    }
    return 0;
}