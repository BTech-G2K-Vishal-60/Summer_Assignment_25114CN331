#include<stdio.h>

int main(){
    int a,b,i,temp,min,gcd;
    printf("Enter two numbers");
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
    printf("GCD = %d",gcd);
    return 0;
}