#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticketNo;
    char passengerName[50];
    char destination[50];
    int seatNo;
    int booked;
};

int main()
{
    struct Ticket ticket[100];
    int n = 0, choice, ticketNo, i, found;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Ticket Number: ");
            scanf("%d", &ticket[n].ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", ticket[n].passengerName);

            printf("Enter Destination: ");
            scanf(" %[^\n]", ticket[n].destination);

            printf("Enter Seat Number: ");
            scanf("%d", &ticket[n].seatNo);

            ticket[n].booked = 1;
            n++;

            printf("Ticket Booked Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Bookings Found!\n");
            }
            else
            {
                printf("\nTicketNo\tPassenger\t\tDestination\tSeat\tStatus\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t\t%-20s%-15s%d\t%s\n",
                           ticket[i].ticketNo,
                           ticket[i].passengerName,
                           ticket[i].destination,
                           ticket[i].seatNo,
                           ticket[i].booked ? "Booked" : "Cancelled");
                }
            }
            break;

        case 3:
            printf("Enter Ticket Number: ");
            scanf("%d", &ticketNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (ticket[i].ticketNo == ticketNo)
                {
                    printf("\nTicket Found\n");
                    printf("Ticket No : %d\n", ticket[i].ticketNo);
                    printf("Passenger : %s\n", ticket[i].passengerName);
                    printf("Destination : %s\n", ticket[i].destination);
                    printf("Seat No : %d\n", ticket[i].seatNo);
                    printf("Status : %s\n",
                           ticket[i].booked ? "Booked" : "Cancelled");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Ticket Not Found!\n");

            break;

        case 4:
            printf("Enter Ticket Number to Cancel: ");
            scanf("%d", &ticketNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (ticket[i].ticketNo == ticketNo)
                {
                    if (ticket[i].booked)
                    {
                        ticket[i].booked = 0;
                        printf("Ticket Cancelled Successfully!\n");
                    }
                    else
                    {
                        printf("Ticket Already Cancelled!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Ticket Not Found!\n");

            break;

        case 5:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}