#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    int found = 0;
    printf("Enter first string:\n");
    scanf("%s", &str1);
    printf("Enter second string:\n");
    scanf("%s", &str2);
    if (strlen(str1) != strlen(str2))
    {
        printf("No string rotation:\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    for (int i = 0; temp[i] != '\0'; i++)
    {
        int j;
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (temp[i + j] != str2[j])
            {
                break;
            }
        }
        if (str2[j] == '\0')
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("Rotation in string:\n");
    }
    else
    {
        printf("No string rotation:\n");
    }

    return 0;
}