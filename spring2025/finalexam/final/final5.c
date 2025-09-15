#include <stdio.h>

typedef struct{
    float amount;
    float rate;
}CURRENCY;

float convert(CURRENCY);

int main()
{
    int run = 1;
    CURRENCY curr;
    while(run == 1){
        int choice;
        char extrachoice;
        printf("Select conevrsion:\n");
        printf("1 = USD to KRW\n");
        printf("2 = KRW to USD\n");
        printf("1 = KRW to JPY\n");
        printf("Choice: ");
        scanf("%d", &choice);
        printf("\nEnter amount: ");
        scanf("%f", &(curr.amount));
        printf("Enter exchange rate: ");
        scanf("%f", &(curr.rate));
        if (choice == 1){
            printf("\nResult: %.2f KRW\n", convert(curr));
            getchar();
            printf("Do you want to convert again? (y/n): ");
            scanf("%c", &extrachoice);
            if(extrachoice == 'n'){
                return 0;
            }
            if(extrachoice == 'y'){
                continue;
            }
        }
        else if (choice == 2){
            printf("\nResult: %.2f USD\n", convert(curr));
            getchar();
            printf("Do you want to convert again? (y/n): ");
            scanf("%c", &extrachoice);
            if(extrachoice == 'n'){
                return 0;
            }
            if(extrachoice == 'y'){
                continue;
            }
        }
        else if (choice == 3){
            printf("\nResult: %.2f JPY\n", convert(curr));
            getchar();
            printf("Do you want to convert again? (y/n): ");
            scanf("%c", &extrachoice);
            if(extrachoice == 'n'){
                return 0;
            }
            if(extrachoice == 'y'){
                continue;
            }
        }
        
    }
    return 0;
}

float convert(CURRENCY curr){
    float result;
    result = (curr.amount) * (curr.rate);
    return result;
}
