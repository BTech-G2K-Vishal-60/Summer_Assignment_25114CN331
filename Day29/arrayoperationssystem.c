#include <stdio.h>

int main()
{
    int arr[100], n = 0;
    int i, pos, value;
    int choice;

    do
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Find Maximum Element\n");
        printf("7. Find Minimum Element\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                printf("Array Elements: ");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 3:
            if (n >= 100)
            {
                printf("Array is full.\n");
                break;
            }

            printf("Enter position (1 to %d): ", n + 1);
            scanf("%d", &pos);

            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid position.\n");
            }
            else
            {
                printf("Enter value: ");
                scanf("%d", &value);

                for (i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                printf("Element inserted successfully.\n");
            }
            break;

        case 4:
            if (n == 0)
            {
                printf("Array is empty.\n");
                break;
            }

            printf("Enter position to delete (1 to %d): ", n);
            scanf("%d", &pos);

            if (pos < 1 || pos > n)
            {
                printf("Invalid position.\n");
            }
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;
                printf("Element deleted successfully.\n");
            }
            break;

        case 5:
        {
            int found = 0;

            if (n == 0)
            {
                printf("Array is empty.\n");
                break;
            }

            printf("Enter element to search: ");
            scanf("%d", &value);

            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("Element not found.\n");
            }
            break;
        }

        case 6:
        {
            if (n == 0)
            {
                printf("Array is empty.\n");
                break;
            }

            int max = arr[0];

            for (i = 1; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }

            printf("Maximum Element = %d\n", max);
            break;
        }

        case 7:
        {
            if (n == 0)
            {
                printf("Array is empty.\n");
                break;
            }

            int min = arr[0];

            for (i = 1; i < n; i++)
            {
                if (arr[i] < min)
                {
                    min = arr[i];
                }
            }

            printf("Minimum Element = %d\n", min);
            break;
        }

        case 8:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 8);

    return 0;
}