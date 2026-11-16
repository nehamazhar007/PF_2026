#include<stdio.h>
#include<string.h>
typedef struct flight{
    int no;
    char depcity[15];
    char destcity[15];
    char date[15];
    int seats;
} flight;

void bookseat(flight *f){
    if (f->seats > 0) {
        f->seats--;
        printf("\nBooking successful!\n");
    } else {
        printf("\nSeats not available.\n");
    }
}

void displayflight(flight f){
    printf("\n--- Flight Details ---\n");
    printf("Flight Number: %d\n", f.no);
    printf("Departure City: %s\n", f.depcity);
    printf("Destination City: %s\n", f.destcity);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.seats);
}

int main(){
    flight f;

    printf("enter the flight number:\n");
    scanf("%d", &f.no);
    printf("enter the departure city\n");
    scanf("%s", &f.depcity);
    printf("ente rthe destination city\n");
    scanf("%s", &f.destcity);
    printf("ente rthe date\n");
    scanf("%s", &f.date);
    printf("enter the number of seats available\n");
    scanf("%d", &f.seats);

    bookseat(&f);
    displayflight(f);

    return 0;
}