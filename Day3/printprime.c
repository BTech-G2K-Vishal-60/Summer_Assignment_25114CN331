#include<stdio.h>
int main(){
    int start,end,i,flag= 1,num;
    printf("Enter starting number: ");
    scanf("%d",&start);
    printf("Enter the end of number");
    scanf("%d",&end);
    for ( num=start;num<=end;num++)
    {
        if(num<=1)
        continue;
        flag=1;
        for(i=2;i*i<=num;i++)
        {
            if(num%i==0){
                flag=0;
                break;
            }
        }
        if(flag){
        printf("%d\n",num);
        }
    }
   
    return 0;
}