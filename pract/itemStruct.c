#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

typedef struct 
{
    char name[50];
    int quantity;
    float price;
}ITEM;

void printItem(ITEM*, int);

int main()
{
    ITEM *arr = malloc((MAX_SIZE)*sizeof(ITEM));
    int count = 0;
    char namechecker[50];
    while(1){
        printf("Enter item name (or 'stop' to finish): ");
        scanf(" %[^\n]", namechecker);
        if (strcmp(namechecker, "stop") == 0){
            break;
        }
        else{
            strcpy((arr+count)->name, namechecker);
        }
        printf("Enter quantity: ");
        scanf("%d", &((arr + count)->quantity));
        printf("Enter price: ");
        scanf("%f", &((arr + count)->price));
        count++;
    }
    arr = realloc(arr, count*sizeof(ITEM));
    printItem(arr, count);
    free(arr);
    return 0;
}

void printItem(ITEM *arr, int count){
    printf("--- Item List---\n");
    for(int i = 0; i < count; i++){
        printf("Item 1: %-15s | Quantity: %-5d | Price: %.2f\n", (arr+i)->name, (arr+i)->quantity, (arr+i)->price);
    }
    return;
}
