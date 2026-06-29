#include <stdio.h>

int main()
{
    float a, b, reslult;
    int choice;
    do
    {
        printf("\n========== Calculator ==========\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice\n");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers\n");
            scanf("%f%f", &a, &b);
        }
        switch (choice)
        {
        case 1:
            reslult = a + b;
            printf("result = %.2f\n", reslult);
            break;
        case 2:
            reslult = a - b;
            printf("Result = %.2f\n", reslult);
            break;
        case 3:
            reslult = a * b;
            printf("Reslut = %.2f", reslult);
            break;
        case 4:
            reslult = a / b;
            printf("Reslut = %.2f", reslult);
            break;
        case 5:
            printf("Exiting calculator");
            break;
        default:
            printf("Invalid choice");
        }

    } while (choice != 5);

    return 0;
}