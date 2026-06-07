#include<stdio.h>
int sum(int a){
    if (a==0)
    {
        return 0;
    }
    
    return a%10 + sum(a/10);
}
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}