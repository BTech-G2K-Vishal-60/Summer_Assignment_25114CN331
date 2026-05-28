#include<stdio.h>

int main(){
    int a ;
    int count =0;
    printf("enter a number");
    scanf("%d",&a);
    if (a==0)
    {
        count = 1;
    }
    if (a<0)
    {
        a=-a;

    }
    while(a>0)
    {
        a=a/10;
        count++;
    }
    printf("the number of digit is %d",count);
    return 0;
}