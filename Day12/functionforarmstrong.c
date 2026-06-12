#include<stdio.h>
int power(int p,int k){
    int result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= p;
    }
    return result;
}
int armstrong(int a){
    int temp = a;
    int digit=0;
    int sum =0;
    while (temp!=0)
    {
         digit++;
        temp=temp/10;
    }
    temp=a;
    while (temp!=0)
    {
        int rem = temp%10;
        sum=sum+power(rem,digit);
        temp = temp/10;
    }
    return sum;
    
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a==armstrong(a))
    {
        printf("%d is a armstrong number",a);
    }
    else{
        printf("%d is not a armstrong number",a);
    }
     return 0;   
}