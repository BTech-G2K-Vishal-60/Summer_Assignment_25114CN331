#include<stdio.h>

int main(){
    int a, i;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Factorial of number %d is:\n",a);
    for ( i = 1; i < a; i++)
    {
        if(a%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}