#include<stdio.h>
int fibbonacci(int a){
    if(a<=1){
        return a;
    }
    return fibbonacci(a-1)+fibbonacci(a-2);
}
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
    printf("%d ",fibbonacci(i));
    }
    return 0;
}