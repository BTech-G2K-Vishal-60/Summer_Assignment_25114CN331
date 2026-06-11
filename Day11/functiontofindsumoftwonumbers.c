#include<stdio.h>
float sum(float a,float b){
    return a+b;
}
int main(){
    float a,b;
    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);
    printf("the sum of %f and %f is %f",a,b,sum(a,b));
    return 0;
}