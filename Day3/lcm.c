#include<stdio.h>

int main(){
    int a,b,i,temp,min,gcd,lcm;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        min =b;
    }
    else
    {
        min = a;
    }
    for( i=1;i<=min;i++)
    {
      if(a%i==0&&b%i==0)
      {
        gcd = i;
      }
     
    }
    lcm = (a*b)/gcd;
    printf("Lcm of %d and %d is  = %d",a,b,lcm);
    return 0;
}