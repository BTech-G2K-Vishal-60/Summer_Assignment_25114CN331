#include <stdio.h>
int main()
{
    char str[100], temp;
    int len = 0;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0')
    {
        len++;
    }
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reverse of string is: %s", str);
    return 0;
}