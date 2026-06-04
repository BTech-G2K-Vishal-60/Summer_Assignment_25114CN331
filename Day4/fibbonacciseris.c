#include<stdio.h>

int main(){
    int a=0,b=1,c,i,n;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("Fibbonacci series \n");
    for ( i = 0; i <n; i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}