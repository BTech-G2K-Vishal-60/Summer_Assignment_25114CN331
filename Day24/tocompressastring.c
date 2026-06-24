#include <stdio.h>

int main()
{
    char str[100];
    int i, count;

    printf("Enter a string:\n");
    scanf("%s", str);
    printf("The compressed string is:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c", str[i]);
        if (count > 1)
        {
            printf("%d", count);
        }
    }

    return 0;
}