#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seats;
};

int main()
{
    struct Ticket t[100];
    int n = 0;
    int choice, i, ticketNo, found;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Update Booking\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Ticket Number: ");
            scanf("%d", &t[n].ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t[n].name);

            printf("Enter Destination: ");
            scanf(" %[^\n]", t[n].destination);

            printf("Enter Number of Seats: ");
            scanf("%d", &t[n].seats);

            n++;
            printf("Ticket booked successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No bookings found.\n");
            }
            else
            {
                printf("\n===== BOOKING DETAILS =====\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nTicket No   : %d\n", t[i].ticketNo);
                    printf("Passenger   : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seats       : %d\n", t[i].seats);
                }
            }
            break;

        case 3:
            printf("Enter Ticket Number to search: ");
            scanf("%d", &ticketNo);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    printf("\nBooking Found\n");
                    printf("Ticket No   : %d\n", t[i].ticketNo);
                    printf("Passenger   : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seats       : %d\n", t[i].seats);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking not found.\n");

            break;

        case 4:
            printf("Enter Ticket Number to update: ");
            scanf("%d", &ticketNo);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    printf("Enter New Passenger Name: ");
                    scanf(" %[^\n]", t[i].name);

                    printf("Enter New Destination: ");
                    scanf(" %[^\n]", t[i].destination);

                    printf("Enter New Number of Seats: ");
                    scanf("%d", &t[i].seats);

                    printf("Booking updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking not found.\n");

            break;

        case 5:
            printf("Enter Ticket Number to cancel: ");
            scanf("%d", &ticketNo);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        t[j] = t[j + 1];
                    }

                    n--;
                    found = 1;
                    printf("Ticket cancelled successfully.\n");
                    break;
                }
            }

            if (!found)
                printf("Booking not found.\n");

            break;

        case 6:
            printf("Thank you for using the Ticket Booking System.\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}