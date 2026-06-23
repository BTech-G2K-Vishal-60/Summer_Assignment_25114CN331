#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp;

    printf("Enter first string:\n");
    scanf("%s", str1);

    printf("Enter second string:\n");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("String is not anagram");
        return 0;
    }

    int n = strlen(str1);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str1[j] > str1[j + 1])
            {
                temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str2[j] > str2[j + 1])
            {
                temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

    if (strcmp(str1, str2) == 0)
        printf("String is anagram\n");
    else
        printf("String is not anagram");

    return 0;
}