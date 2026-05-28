#include<stdio.h>

int main(){
    int a;
    int fact = 1;
    printf("ENTER A NUMBER\n");
    scanf("%d",&a);
    if(a>0)
    {
    for (int i = 1; i <= a; i++)
    {
        fact = fact*i;
    }
    printf("THE FACTORIAL OF NUMBER %d\n" ,fact);
    }
    else
    {
        printf("PLEASE ENTER A POSITIVE NUMBER");
    }
    
    return 0;
}