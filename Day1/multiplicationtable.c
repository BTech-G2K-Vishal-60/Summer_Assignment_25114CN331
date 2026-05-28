#include<stdio.h>

int main(){
    int a;
    printf("ENTER A POSITIVE NUMBER:\n");
    scanf("%d",&a);
    if (a>0)
    {
      for(int i=1;i<=10;i++)
      {
        printf("%d * %d = %d\n",a,i,i*a);
      }  
    }
      else
      {
        printf("please enter a positive number\n");
      }
      
    
    return 0;
}