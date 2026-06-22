#include <stdio.h>
int main()
{
    char str[100];
    int words = 0;
    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            words++;
        }
    }
    printf("Number of words = %d\n", words);

    return 0;
}