#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char name[100][50], temp[50];

    printf("Enter number of names:\n");
    scanf("%d", &n);

    printf("Enter names:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}