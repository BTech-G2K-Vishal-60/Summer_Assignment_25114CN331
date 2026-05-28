#include<stdio.h>
int main(){
    int a;
    int sum = 0;
    printf("ENTER A NATURAL NUMBER\n");
    scanf("%d",&a);
    if ( a>0)
    {
    for (int i = 1; i <=a; i++)
    {
        sum = sum + i;
        
    }
    printf("THE SUM OF N NATURAL NUMBERS : %d\n",sum);
}
else
{
    printf("PLEASE ENTER A POSITIVE NUMBER\n");
}
    return 0;
}