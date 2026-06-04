#include<stdio.h>

int main(){
    int a=0,b=1,n,c,i;
    printf("Enter the term for which you want to find the fibboncci term: ");
    scanf("%d",&n);
    if(n==0){
        a=0;
    }
    else{
    for ( i = 0; i < n-1; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
}
    printf("%dth fibbonacci term is: %d ",n,a);

    return 0;
}