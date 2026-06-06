#include<stdio.h>

int main(){
    int a,j,i=0,rem;
    int b[10];
    printf("Enter your number\n");
    scanf("%d",&a);
    printf("The binary of the number is :");
    if (a==0)
    {
        printf("0");
    }
    
    while (a!=0)
    {
        rem = a%2;
        a=a/2;
        b[i] = rem;
        i++;
    }
    for ( j = i-1; j >=0; j--)
    {
        printf("%d",b[j]);
    }
    
    
    return 0;
}