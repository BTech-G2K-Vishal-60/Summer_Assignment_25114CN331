#include<stdio.h>
int main()
{
    int a,i,flag = 1;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a<=1)
    {
        flag = 0;
    }
    else
    {
    for ( i = 2; i <=a/2; i++)
    {
        if(a%i==0){
            flag=0;
            break;
        }
    }
    }
    if(flag){
    printf("%d is a prime number",a);
}
else{
    printf("%d is not a prime number",a);
}
return 0;
}
