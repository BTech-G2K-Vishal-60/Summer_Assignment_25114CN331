#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len, flag = 1;
    printf("Enter a string:\n");
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("Pallindrome string\n");
    }
    else
    {
        printf("Not Pallindrome string\n");
    }

    return 0;
}