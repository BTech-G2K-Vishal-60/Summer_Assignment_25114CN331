#include<stdio.h>
int num=0;
int pallindrome(int a){
    if(a==0){
        return num;
    }
     num = num*10+a%10;
     return pallindrome(a/10);
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a==pallindrome(a)){
        printf("%d is pallindrome",a);
    }
    else{
        printf("%d is not pellindrome",a);
    }
    return 0;
}