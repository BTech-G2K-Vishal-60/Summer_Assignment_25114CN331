#include<stdio.h>
long long factorial(int n){
    if(n==0||n==1)
    {
        return 1;
    }
    {
        return n*factorial(n-1);
    }
}
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a<1)
    {
        printf("Invalid input :");
    }
    else{
    printf("%lld",factorial(a));
    }
    return 0;
}