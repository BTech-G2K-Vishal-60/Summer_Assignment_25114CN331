#include<stdio.h>

int main(){
    int a,sum=0,digit,i,fact;
    printf("Enter a number \n");
    scanf("%d",&a);
    int temp = a;
    while (temp!=0)
    {
       digit = temp%10;
       fact =1;
       for ( i = 1; i <=digit; i++)
       {
        fact = fact *i;
       }
       sum = sum + fact;
       temp = temp/10;
       
    }
    if (sum == a)
    {
        printf("%d  is a strong number ",sum);
    }
    else{
        printf("%d is not a strong number",a);
    }
    
    
    return 0;
}