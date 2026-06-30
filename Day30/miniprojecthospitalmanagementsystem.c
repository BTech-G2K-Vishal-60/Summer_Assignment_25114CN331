#include <stdio.h>
#include <string.h>

struct Patient
{
    int id;
    char name[50];
    int age;
    char gender[10];
    char disease[50];
};

struct Patient p[100];
int n = 0;

void addPatient()
{
    printf("\nEnter Patient ID: ");
    scanf("%d", &p[n].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", p[n].name);

    printf("Enter Age: ");
    scanf("%d", &p[n].age);

    printf("Enter Gender: ");
    scanf("%s", p[n].gender);

    printf("Enter Disease: ");
    scanf(" %[^\n]", p[n].disease);

    n++;

    printf("\nPatient Added Successfully!\n");
}

void displayPatients()
{
    int i;

    if (n == 0)
    {
        printf("\nNo Records Found.\n");
        return;
    }

    printf("\n---------------------------------------------------------------\n");
    printf("ID\tName\t\tAge\tGender\tDisease\n");
    printf("---------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%-15s%d\t%-8s%s\n",
               p[i].id,
               p[i].name,
               p[i].age,
               p[i].gender,
               p[i].disease);
    }
}

void searchPatient()
{
    int id, i;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (p[i].id == id)
        {
            printf("\nPatient Found\n");
            printf("ID      : %d\n", p[i].id);
            printf("Name    : %s\n", p[i].name);
            printf("Age     : %d\n", p[i].age);
            printf("Gender  : %s\n", p[i].gender);
            printf("Disease : %s\n", p[i].disease);
            return;
        }
    }

    printf("Patient Not Found.\n");
}

void updatePatient()
{
    int id, i;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (p[i].id == id)
        {
            printf("Enter New Disease: ");
            scanf(" %[^\n]", p[i].disease);

            printf("Record Updated Successfully.\n");
            return;
        }
    }

    printf("Patient Not Found.\n");
}

void dischargePatient()
{
    int id, i, j;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (p[i].id == id)
        {
            for (j = i; j < n - 1; j++)
            {
                p[j] = p[j + 1];
            }

            n--;

            printf("Patient Discharged Successfully.\n");
            return;
        }
    }

    printf("Patient Not Found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== HOSPITAL PATIENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Disease\n");
        printf("5. Discharge Patient\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPatient();
            break;

        case 2:
            displayPatients();
            break;

        case 3:
            searchPatient();
            break;

        case 4:
            updatePatient();
            break;

        case 5:
            dischargePatient();
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