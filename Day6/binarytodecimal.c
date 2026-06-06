#include<stdio.h>

int main(){
    int a,b[10],rem;
    int decimal = 0,weight =1;
    printf("Enter a binary number:\n");
    scanf("%d",&a);
    printf("The decimal of number is :");
    while(a!=0)
    {
        rem = a%10;
        decimal=decimal+rem*weight;
        weight=weight*2;
        a=a/10;
    }
    printf("%d",decimal);
    return 0;
}