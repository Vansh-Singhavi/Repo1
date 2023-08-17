#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEATS 50

struct Ticket {
    int seatNumber;
    char passengerName[50];
    int age;
};

struct Ticket tickets[MAX_SEATS];
int totalTickets = 0;

void bookTicket() {
    if (totalTickets >= MAX_SEATS) {
        printf("Sorry, all seats are booked.\n");
        return;
    }

    struct Ticket newTicket;

    printf("Enter passenger name: ");
    scanf("%s", newTicket.passengerName);
    
    printf("Enter passenger age: ");
    scanf("%d", &newTicket.age);

    newTicket.seatNumber = totalTickets + 1;
    tickets[totalTickets++] = newTicket;

    printf("Ticket booked successfully. Seat number: %d\n", newTicket.seatNumber);
}

void displayTickets() {
    printf("Seat Number\tPassenger Name\tAge\n");
    printf("------------------------------------\n");
    
    for (int i = 0; i < totalTickets; i++) {
        printf("%d\t\t%s\t\t%d\n", tickets[i].seatNumber, tickets[i].passengerName, tickets[i].age);
    }
}

int main() {
    int choice;

    do {
        printf("\nRailway Reservation System\n");
        printf("1. Book Ticket\n");
        printf("2. Display Booked Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;
            case 2:
                displayTickets();
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

