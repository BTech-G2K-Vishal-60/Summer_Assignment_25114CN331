#include <stdio.h>

int main()
{
    char str[100];
    int count;

    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                printf("First reapating character = %c", str[i]);
                return 0;
            }
        }
    }
    printf("No reapating character\n");
    return 0;
}