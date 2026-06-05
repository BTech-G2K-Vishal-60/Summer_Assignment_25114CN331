#include<stdio.h>

int main(){
    int a,i,sum=0,flag=1,largest=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    for ( i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            flag=1;
            for (int j = 2; j < i; j++)
            {
                if (i%j==0)
                {
                    flag =0;
                    break;
                }
                
            }
            if (flag==1&& largest<i)
            {
                largest = i;
            }
        
        }
        
    }
    printf("The largest prime factor of %d is %d",a,largest);
    return 0;
}