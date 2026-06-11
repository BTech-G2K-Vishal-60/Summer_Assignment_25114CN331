#include<stdio.h>
long long factorial(int a){
    if(a==0||a==1){
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("The factorial of %d is %lld",a,factorial(a));
    return 0;
}