#include <stdio.h>
#define max_size 100

typedef struct 
    {
        char name[max_size];
        float price;
        int quantity;
        float amount;
    }PRICETAG;

void scanPriceTag(PRICETAG*);
void printPriceTag(PRICETAG);

int main()
{
    PRICETAG pricetag1;
    PRICETAG *p_pricetag1 = &pricetag1;

    scanPriceTag(p_pricetag1);
    pricetag1.amount = pricetag1.price * pricetag1.quantity;
    printf("\n");
    printPriceTag(pricetag1);

    return 0;
    
}

void scanPriceTag(PRICETAG *tag){
    printf("Enter product name: ");
    scanf("%s", tag->name);
    printf("Enter price: ");
    scanf("%f", &(tag->price));
    printf("Enter quantity: ");
    scanf("%d", &(tag->quantity));
    return;
}

void printPriceTag(PRICETAG tag){
    printf("Name: %s\n", tag.name);
    printf("Price: %f\n", tag.price);
    printf("Quantity: %d\n", tag.quantity);
    printf("Total Amount: %f\n", tag.amount);
    return;
}