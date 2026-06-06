#include<stdio.h>

int main(){
    int a,j,i=0,rem;
    printf("Enter your number\n");
    scanf("%d",&a);
    printf("The number set bit is :");
    if (a==0)
    {
        printf("0");
    }
    
    while (a!=0)
    {
        rem = a%2;
        
        if (rem==1)
        {
            i++;
        }
        a=a/2;
        
    }
   printf("%d",i);
   return 0;
}