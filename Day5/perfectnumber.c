#include<stdio.h>

int main(){
    int a,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    for ( i = 1; i <=a/2; i++)
    {
        if(a%i==0){
            sum = sum +i;
        }
    }
    if(sum==a){
        printf("%d is a perfect number",a);
    }
    else{
        printf("it is not a perfect number");
    }
    
    return 0;
}