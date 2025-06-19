#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int seatnum;
    int booked;
    char name[50];
}SEAT;

void reserveSeat(SEAT*, int);
void editSeat(SEAT*, int);
void cancelSeat(SEAT*, int);
void displaySeat(SEAT*, int);

int main()
{
    int total, menu;
    printf("Enter total number of seats: ");
    scanf("%d", &total);
    SEAT *seatres = malloc(total*sizeof(SEAT));
    while(menu != 5){
        printf("\n");
        printf("--Menu--\n");
        printf("1. Reserve a seat\n");
        printf("2. Edit reservation\n");
        printf("3. Cancel reservation\n");
        printf("4. Display all seats\n");
        printf("5. Exit\n");
        printf("Select: ");
        scanf("%d", &menu);
        if (menu == 1){
            reserveSeat(seatres, total);
        }
        else if (menu == 2){
            editSeat(seatres, total);
        }
        else if (menu == 3){
            cancelSeat(seatres, total);
        }
        else if (menu == 4){
            displaySeat(seatres, total);
        }
        else if (menu == 5){
            printf("The program is now terminated.\n");
            free(seatres);
            return 0;
        }
    }
}

void reserveSeat(SEAT* seatres, int total){
    int seatnumber;
    printf("Enter seat number to reserve(1-%d): ", total);
    scanf("%d", &seatnumber);
    printf("Enter passenger name: ");
    scanf(" %[^\n]", &((seatres + (seatnumber - 1))->name));
    (seatres + (seatnumber - 1))->booked = 1;
    printf("Seat %d reserved for %s.\n", seatnumber, (seatres + (seatnumber - 1))->name);
    return;
}

void editSeat(SEAT* seatres, int total){
    int seatnumber;
    printf("Enter seat number to edit name(1-%d): ", total);
    scanf("%d", &seatnumber);
    getchar();
    printf("Enter new passenger name: ");
    scanf("%[^\n]", (seatres + (seatnumber - 1))->name);
    printf("Seat %d reserved for %s.\n", seatnumber, (seatres + (seatnumber - 1))->name);
    return;
}

void cancelSeat(SEAT* seatres, int total){
    int seatnumber;
    printf("Enter seat number to cancel(1-%d): ", total);
    scanf("%d", &seatnumber);
    (seatres + (seatnumber - 1))->booked = 0;
    printf("Seat %d reservation canceled.\n", seatnumber);
    return;
}

void displaySeat(SEAT* seatres, int total){
    printf("--Seat Status--\n");
    for(int i = 0; i < total; i++){
        if((seatres + i)->booked == 1){
            printf("[%d] Booked by %s\n", i+1, (seatres + i)->name);
        }
        else{
            printf("[%d] Empty!\n", i+1);
        }
    }
    return;
}
