#include <stdio.h>

int main()
{
    typedef struct 
    {
        int id;
        float gpa;
    }SCORE;

    SCORE arr[2];
    SCORE *score1 = arr;
    arr[0].id = 1;
    arr[0].gpa = 2.9;
    arr[1].id = 2;
    arr[1].gpa = 3.7;
    for(int i = 0; i < 2; i++){
        printf("Student %d: ID = %d\n", i+1, arr[i].id);
        printf("Student %d: GPA = %f\n", i+1, arr[i].gpa);
    }
    return 0;
}