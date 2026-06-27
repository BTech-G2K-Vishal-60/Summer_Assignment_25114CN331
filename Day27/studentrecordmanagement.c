#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;

    printf("\nStudent Added Successfully!\n");
}
void displayStudents()
{
    int i;

    if (n == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n----------------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}
void searchStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nRecord Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nStudent Not Found!\n");
}
void updateStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nStudent Not Found!\n");
}
void deleteStudent()
{
    int roll, i, j, found = 0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
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
        printf("\nStudent Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
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