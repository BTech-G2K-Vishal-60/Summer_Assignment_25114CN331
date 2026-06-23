#include <stdio.h>

int main()
{
    char str[100], ch;
    int count, max = 0;

    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            ch = str[i];
        }
    }

    printf("Maximun occuring character = %c\n", ch);
    printf("Frequency = %d", max);
    return 0;
}