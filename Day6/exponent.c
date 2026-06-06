#include<stdio.h>
int power(int a,int power)
{
    int result = 1;
    for (int i = 1; i <= power; i++)
    {
        result=result*a;
    }
    return result;
}    
   int main(){
        int a,b,res;
        printf("Enter the number:");
        scanf("%d",&a);
        printf("Enter its power:");
        scanf("%d",&b);
        res = power(a,b);
        printf("%d",res);
        return 0;
    }    
