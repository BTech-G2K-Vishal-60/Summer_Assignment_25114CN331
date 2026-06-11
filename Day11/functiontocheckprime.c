#include<stdio.h>
int prime(int a){
    if(a<=1){
        return 0;
    }
    for (int i = 2; i*i <= a; i++)
    {
        if(a%i==0){
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(prime(a)){
        printf("%d is prime number",a);
    }
    else{
        printf("%d is not prime",a);
    }
    return 0;
}