#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], longest[50];
    int i = 0, j = 0, max = 0, len = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if (len > max)
            {
                max = len;

                for (j = 0; j < len; j++)
                {
                    longest[j] = str[i - len + j];
                }
                longest[j] = '\0';
            }
            len = 0;
        }
        i++;
    }

    if (len > max)
    {
        max = len;
        for (j = 0; j < len; j++)
        {
            longest[j] = str[i - len + j];
        }
        longest[j] = '\0';
    }

    printf("Longest word is = %s\n", longest);
    printf("Length = %d\n", max);

    return 0;
}