#include<stdio.h>
int rev =0;
int reverse(int a){
    if (a==0)
    {
        return rev;
    }

    rev =rev*10+a%10;
return reverse(a/10);
}
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("%d",reverse(a));
    return 0;
}