#include <stdio.h>

int power(int a, int b)
{
    int result = 1;

    for(int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}

int main()
{
    int a,temp,digit, b,sum,rem;

    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    for(int n = a; n <= b; n++)
    {
         temp = n;
         sum = 0;
         digit = 0;
        
        if(temp == 0)
            digit = 1;
        else
        {
            while(temp != 0)
            {
                digit++;
                temp = temp/10;
            }
        }

        temp = n;
        while(temp != 0)
        {
            int rem = temp % 10;
            sum =sum+ power(rem, digit);
            temp =temp/ 10;
        }

        if(n == 0){
            sum = 0;
        }
        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}