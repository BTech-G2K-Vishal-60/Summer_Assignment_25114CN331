#include<stdio.h>
int perfect(int a){
    int sum =0;
    for (int i = 1; i <=a/2; i++)
    {
        if (a%i==0)
        {
            sum +=i;
        }
        
    }
    return sum;
}
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a==perfect(a)){
        printf("%d is a perfect number",a);
    }
    else{
        printf("%d is not a perfect number",a);
    }
    return 0;
}