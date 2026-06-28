#include <stdio.h>
#include <string.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank customer[100];
    int n = 0, choice, accNo, i, found;
    float amount;

    do
    {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &customer[n].accNo);

            printf("Enter Customer Name: ");
            scanf(" %[^\n]", customer[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &customer[n].balance);

            n++;

            printf("Account Created Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Accounts Found!\n");
            }
            else
            {
                printf("\nAcc No\tCustomer Name\t\tBalance\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%-20s\t%.2f\n",
                           customer[i].accNo,
                           customer[i].name,
                           customer[i].balance);
                }
            }
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (customer[i].accNo == accNo)
                {
                    printf("\nAccount Found\n");
                    printf("Account Number : %d\n", customer[i].accNo);
                    printf("Customer Name  : %s\n", customer[i].name);
                    printf("Balance        : %.2f\n", customer[i].balance);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Account Not Found!\n");

            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (customer[i].accNo == accNo)
                {
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);

                    customer[i].balance += amount;

                    printf("Deposit Successful!\n");
                    printf("New Balance = %.2f\n", customer[i].balance);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Account Not Found!\n");

            break;

        case 5:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (customer[i].accNo == accNo)
                {
                    printf("Enter Withdrawal Amount: ");
                    scanf("%f", &amount);

                    if (amount <= customer[i].balance)
                    {
                        customer[i].balance -= amount;

                        printf("Withdrawal Successful!\n");
                        printf("Remaining Balance = %.2f\n",
                               customer[i].balance);
                    }
                    else
                    {
                        printf("Insufficient Balance!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Account Not Found!\n");

            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}