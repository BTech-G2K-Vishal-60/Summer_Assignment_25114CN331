#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Convert to Uppercase\n");
        printf("9. Convert to Lowercase\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';
            break;

        case 2:
            printf("String: %s\n", str1);
            break;

        case 3:
            printf("Length = %lu\n", strlen(str1));
            break;

        case 4:
            strcpy(str2, str1);
            printf("Copied String: %s\n", str2);
            break;

        case 5:
            printf("Enter another string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            strcat(str1, str2);
            printf("After Concatenation: %s\n", str1);
            break;

        case 6:
            printf("Enter another string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            if (strcmp(str1, str2) == 0)
                printf("Strings are Equal.\n");
            else
                printf("Strings are Not Equal.\n");
            break;

        case 7:
            strrev(str1);
            printf("Reversed String: %s\n", str1);
            break;

        case 8:
            strupr(str1);
            printf("Uppercase: %s\n", str1);
            break;

        case 9:
            strlwr(str1);
            printf("Lowercase: %s\n", str1);
            break;

        case 10:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 10);

    return 0;
}