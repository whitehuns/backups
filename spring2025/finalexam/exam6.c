#include <stdio.h>

typedef struct {
    int a;
    int b;
} STR_1;

typedef struct {
    STR_1 i;
    int j;
} STR_2;

typedef struct {
    STR_2 x;
    int y;
} STR_3;

int main(void) {
    STR_3 arr[3] = {{1, 2}, {3, 4, 5}, 6, 7, 8};
    STR_3* ptr = arr;

    printf("%d \n", ((ptr + 1)->x).i.a);    // arr[1].x.i.a => 5
    printf("%d \n", (*(arr + 2)).y);        // arr[2].y     => 12
    printf("%d \n", (ptr->x).j);            // arr[0].x.j   => 3
    printf("%d \n", arr[2].x.i.a);          // arr[2].x.i.a => 9

    return 0;
}
