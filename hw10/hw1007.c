#include <stdio.h>

int main()
{
    typedef union 
    {
        int id;
        float gpa;
    }SCORE;
    SCORE score1, score2;
    SCORE *p_score1 = &score1;
    SCORE *p_score2 = &score2;
    p_score1 -> id = 1;
    printf("First Student ID = %d", p_score1 -> id);
    p_score1 -> gpa = 2.9;
    printf(" and GPA = %f\n", p_score1 -> gpa);
    p_score2 -> id = 2;
    printf("Second Student ID = %d", p_score2 -> id);
    p_score2 -> gpa = 3.7;
    printf(" and GPA = %f\n", p_score2 -> gpa);

    return 0;
}