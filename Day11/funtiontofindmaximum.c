#include<stdio.h>
double max(double a, double b){
    if (a>b)
    {
        return a;
    }
    if (b>a)
    {
        return b;
    }
    
    
   
}
int main(){
    double a,b;
    printf("Enter two number:\n");
    scanf("%lf%lf",&a,&b);
    if(a==b){
        printf("THe numbers are equal");
    }
    else{
    printf("The maximum of two numbers is %lf",max(a,b));
    }
    return 0;
}