#include<stdio.h>

int main(){
    int a,num, pro = 0 ,rem ;
    printf("Enter a number : ");
    scanf("%d",&a);
    num = a;
    while (a>0)
    {
        rem=a%10;
        pro=pro*10+rem;
        a=a/10;
    }
    if (pro == num)
    {
        printf("the number %d is pallindrom",num);
    }
    else
    {
        printf("the number %d is not pallindrom",num);
    }
    return 0;
}