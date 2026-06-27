#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee s[100];
int n = 0;
void addEmployee()
{
    printf("\nEnter Employ ID Number: ");
    scanf("%d", &s[n].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Salary: ");
    scanf("%f", &s[n].salary);

    n++;

    printf("\nEmployee Added Successfully!\n");
}
void displayEmployee()
{
    int i;

    if (n == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n----------------------------------------\n");
    printf("id\tName\t\tsalary\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               s[i].id,
               s[i].name,
               s[i].salary);
    }
}
void searchEmployee()
{
    int id, i, found = 0;

    printf("\nEnter Employee id Number: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (s[i].id == id)
        {
            printf("\nRecord Found\n");
            printf("Employee id : %d\n", s[i].id);
            printf("Name : %s\n", s[i].name);
            printf("Salary: %.2f\n", s[i].salary);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nEmployee Not Found!\n");
}
void updateEmployee()
{
    int id, i, found = 0;

    printf("\nEnter Employee id to Update: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (s[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Salary: ");
            scanf("%f", &s[i].salary);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nEmployee Not Found!\n");
}
void deleteEmployee()
{
    int id, i, j, found = 0;

    printf("\nEnter Employee ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (s[i].id == id)
        {
            for (j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;

            printf("\nRecord Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nEmployee Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Employee RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployee();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            deleteEmployee();
            break;

        case 6:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}