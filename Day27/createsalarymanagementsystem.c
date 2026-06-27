#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee emp[100];
int n = 0;

int main()
{
    int choice, i;

    while (1)
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Salary Record\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;

            printf("\nRecord Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Records Found!\n");
            }
            else
            {
                printf("\n----------------------------------------\n");
                printf("ID\tName\t\tSalary\n");
                printf("----------------------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
                }
            }
            break;

        case 3:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}