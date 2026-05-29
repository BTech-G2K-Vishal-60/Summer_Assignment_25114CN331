#include<stdio.h>

int main(){
    int a,rem;
    int sum = 0;
    printf("Enter A Number: ");
    scanf("%d",&a);
    if(a<0)
    {
    a = -a;    
    }
    while (a>0)
    {
      rem = a%10;
      sum = sum +rem;
      a=a/10;
    }
    printf("The Sum Of digits Of numbers is: %d",sum);
    return 0;
}