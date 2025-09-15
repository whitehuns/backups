#include <stdio.h>
#define max_size 100

int main()
{
    typedef struct
    {
        int rollnum;
        int birthdate[3];
    }DETAIL;
    
    typedef struct 
    {
        char name[max_size];
        DETAIL detail_info;
    }INFORMATION;

    INFORMATION test1;
    
    printf("Enter name: ");
    scanf("%s", test1.name);
    getchar();
    printf("Enter roll number: ");
    scanf("%d", &test1.detail_info.rollnum);
    printf("Enter Date of Birth [DD MM YY] format: ");
    for(int i = 0; i < 3; i++){
        scanf("%d", &(test1.detail_info.birthdate[i]));
    }

    printf("Name : %s\n", test1.name);
    printf("RollNo : %d\n", test1.detail_info.rollnum);
    printf("Date of Birth: ");
    for(int i = 0; i < 3; i++){
        printf("%d ", test1.detail_info.birthdate[i]);
    }
    return 0;
    
}