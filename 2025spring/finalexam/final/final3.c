#include <stdio.h>
#include <stdlib.h>

void search_target(int*, int, int);

int main()
{
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = malloc(n*sizeof(int));
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    printf("Enter value to search: ");
    scanf("%d", &val);
    search_target(arr, n, val);
    free(arr);
    return 0;
}

void search_target(int *arr, int n, int val){
    int found = 0;
    int index;
    for(int i = 0; i < n; i++){
        if (*(arr + i) == val){
            found = 1;
            index = i;
        }
    }
    if (found == 1){
        printf("Found at index %d\n", index);
    }
    else{
        printf("Not found\n");
    }
    return;
}
