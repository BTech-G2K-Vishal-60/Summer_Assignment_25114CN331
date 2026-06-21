#include <stdio.h>

int main()
{
    char str[100];
    int vow = 0, con = 0, i = 0;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != 0)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' ||
            str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
                str[i] == 'U')
            {
                vow++;
            }
            else
            {
                con++;
            }
        }
        i++;
    }
    printf("vowels = %d\n", vow);
    printf("consonants = %d\n", con);

    return 0;
}