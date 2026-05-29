#include<stdio.h>

int main(){
    int a,pro = 1,rem;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a==0)
    {
        pro=0;
    }
    if(a<0)
    {
        a=-a;
    }
    while(a>0)
    {
        rem = a%10;
        pro = pro *rem;
        a=a/10;
    }
    printf("%d",pro);
    return 0;
}