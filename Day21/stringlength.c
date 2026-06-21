#include <stdio.h>
int main()
{
    char str[100];
    int len = 0;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length of string = %d\n", len);
    return 0;
}