// Write a program to Create ticket booking system.
#include <stdio.h>
#include <string.h>
struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};
int main(){
    struct Ticket t[100];
    int n, i;
    printf("Enter number of bookings: ");
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Booking %d\n", i + 1);

        printf("Enter Ticket Number: ");
        scanf("%d", &t[i].ticketNo);

        getchar();

        printf("Enter Passenger Name: ");
        fgets(t[i].name, sizeof(t[i].name), stdin);
        t[i].name[strcspn(t[i].name, "\n")] = '\0';

        printf("Enter Number of Seats: ");
        scanf("%d", &t[i].seats);

        getchar();
    }
    printf("\n TICKET BOOKING DETAILS   :   \n");

    for(i = 0; i < n; i++)
    {
        printf("\nBooking %d\n", i + 1);
        printf("Ticket Number  : %d\n", t[i].ticketNo);
        printf("Passenger Name : %s\n", t[i].name);
        printf("Seats Booked   : %d\n", t[i].seats);
    }
    return 0;
}