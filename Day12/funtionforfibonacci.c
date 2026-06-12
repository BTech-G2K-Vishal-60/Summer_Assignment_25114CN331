#include<stdio.h>
void fibbonaci(int n){
    int a=0,b=1,c;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    
}
int main(){
    int k;
    printf("Enter number of terms\n");
    scanf("%d",&k);
    fibbonaci(k);
    return 0;
}