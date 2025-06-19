#include <stdio.h>
#include <stdlib.h>

typedef struct 
    {
        char name[50];
        int age;
        float gpa;
    }STUDENT;

void input_students(STUDENT*, int);

int main()
{
    int num;
    printf("Enter number of students: ");
    scanf(" %d", &num);
    STUDENT *studentinfo = (STUDENT*)malloc(num*sizeof(STUDENT));
    input_students(studentinfo, num);
    for(int i = 0; i < num; i++){
        printf("Name : %s, Age : %d, GPA : %.2f\n", (studentinfo + i)->name, (studentinfo + i)->age, (studentinfo + i)->gpa);
    }
    free(studentinfo);
    return 0;
}

void input_students(STUDENT *studentinfo, int num){
    for(int i = 0; i < num; i++){
        getchar();
        printf("Student %d Name: ", i + 1);
        gets((studentinfo + i)->name);
        printf("Student %d Age: ", i + 1);
        scanf(" %d", &(studentinfo + i)->age);
        printf("Student %d GPA: ", i + 1);
        scanf(" %f", &(studentinfo + i)->gpa);
        }
        return;
    }
