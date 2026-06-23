#include <stdio.h>

int main()
{
    char str[100];
    int count;

    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);
    printf("The reapating character is:\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}