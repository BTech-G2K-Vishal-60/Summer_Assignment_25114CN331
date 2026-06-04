#include<stdio.h>

int power(int a, int b)
{
    int result = 1;

    for(int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}


int main(){
    int n,temp,rem,sum = 0,digit =0;
    printf("enter a number\n");
    scanf("%d",&n);
    temp = n;
    while (temp!=0)
    {
        digit++;
        temp = temp/10;
    }
    temp = n;
    while (temp!=0)
    {
        rem = temp%10;
        sum=sum+power(rem,digit);
        temp=temp/10;
    
    }

    if (sum==n)
    {
        printf("The number is a armstrong number");
    }
    else 
    {
        printf("The number is not a armstrong number");
    }
        return 0;
}