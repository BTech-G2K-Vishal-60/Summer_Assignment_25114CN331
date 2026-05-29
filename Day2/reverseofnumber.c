#include<stdio.h>

int main(){
    int a,rev = 0,rem, sign = 1;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a<0)
    {
        a = -a;
        sign =-1;
    }
    while (a>0)
    {
        rem=a%10;
        rev = rev*10+rem;
        a=a/10;
    }
    rev = rev * sign;
    printf("The reverse of number is: %d",rev);
    return 0;
}