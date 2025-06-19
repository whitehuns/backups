#include <stdio.h>
#define max_size 100

int main()
{
    typedef struct {
        char name[max_size];
        int id;
        float salary;
    } INFORMATION; // struct information = INFORMATION
    INFORMATION info1 = {"Henry", 1112, 95473};
    printf("Name: %s\nId: %d\nSalary: %f\n", info1.name, info1.id, info1.salary);
    return 0;
}
