#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[50];
    int id;
    int scores[5];
    float avg;
    char grade;
    float gpa;
}STUDENT;

void inputInfo(STUDENT*);
void printInfo(STUDENT*);

int main()
{
    int size;
    printf("Enter number of students: ");
    scanf("%d", &size);
    STUDENT *information = malloc(size*sizeof(STUDENT));
    for(int i = 0; i < size; i++){
        inputInfo(information + i);
    }
    printf("---------------------------------------\n");
    printf("Name  ID  Scores        Avg  Grade  GPA\n");
    printf("---------------------------------------\n");
    for(int i = 0; i < size; i++){
        printInfo(information + i);
    }
    free(information);
    return 0;
}

void inputInfo(STUDENT* information){
    printf("Enter name: ");
    scanf(" %[^\n]", information->name); // (*ptr).name == ptr->name
    printf("Enter Student ID: ");
    scanf("%d", &(information->id));
    printf("Enter 5 subject scores: ");
    information->avg = 0;
    for(int i = 0 ; i < 5; i++){
        scanf("%d", (information->scores) + i);
        information->avg += *((information->scores) + i);
    }
    information->avg = information->avg / 5;
    if (information->avg >= 90){
        information->grade = 'A';
        information->gpa = 4.0;
    }
    else if (information->avg >= 80 && information->avg < 90){
        information->grade = 'B';
        information->gpa = 3.0;
    }
    else if (information->avg >= 70 && information->avg < 80){
        information->grade = 'C';
        information->gpa = 2.0;
    }
    else if (information->avg >= 60 && information->avg < 70){
        information->grade = 'D';
        information->gpa = 1.0;
    }
    else if (information->avg >= 50 && information->avg < 60){
        information->grade = 'E';
        information->gpa = 0.5;
    }
    else{
        information->grade = 'F';
        information->gpa = 0.0;
    }
    return;
}

void printInfo(STUDENT* information){
    printf("%s %-8d", information->name, information->id);
    for(int i = 0; i < 5; i++){
        printf("%d ", *(information->scores + i));
    }
    printf("%.1f  %c  %.1f\n", information->avg, information->grade, information->gpa);
}



