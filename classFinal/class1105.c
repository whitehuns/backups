/*

Write a program to store and display item information using structure.

Requirements
- Allows user input the item information
- Defines a struct Item which contains:
     char name[50]
     int quantity
     float price
- Stores the information in an array of structures.
- Implement void display_items(struct Item* list, int count); to display item data
- Dynamically allocates memory for the array of students using malloc() or calloc().
- Repeatedly asks the user to enter item details (name, quantity, price) using a while loop
- Print the output based on the sample below.
- Frees the allocated memory at the end.

Sample:

Enter item name (or 'stop' to finish): orange
Enter quantity: 3
Enter price: 2.5
Enter item name (or 'stop' to finish): apple
Enter quantity: 2
Enter price: 2.5
Enter item name (or 'stop' to finish): stop

--- Item List ---
Item 1: orange | Quantity: 3 | Price: 2.50
Item 2: apple | Quantity: 2 | Price: 2.50


*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct
{
    char name[50];
    int quantity;
    float price;
}ITEM;

void display_items(ITEM*, int);

int main()
{
    int count = 0;
    char namechecker[50];
    ITEM *iteminfo = malloc(MAX_SIZE*sizeof(ITEM));
    while(1){
        printf("Enter item name (or 'stop' to finish): ");
        scanf(" %[^\n]", namechecker);
        if(namechecker[0] == 's' && namechecker[1] == 't' && namechecker[2] == 'o' && namechecker[3] == 'p' && namechecker[4] == '\0'){
            break;
        }
        else{
            for(int i = 0; namechecker[i] != '\0'; i++){
                *((iteminfo + count)->name + i) = namechecker[i];
            }
        }
        printf("Enter quantity: ");
        scanf(" %d", &(iteminfo + count)->quantity);
        printf("Enter price: ");
        scanf(" %f", &(iteminfo + count)->price);
        count++;
    }
    iteminfo = realloc(iteminfo, count*sizeof(ITEM));
    display_items(iteminfo, count);
    free(iteminfo);
    return 0;
}

void display_items(ITEM *iteminfo, int count){
    for(int i = 0; i < count; i ++){
        printf("Item %d: %s       | Quantity: %d     | Price = %.2f\n", i+1, iteminfo->name, iteminfo->quantity, iteminfo->price);
    }
    return;
}


































