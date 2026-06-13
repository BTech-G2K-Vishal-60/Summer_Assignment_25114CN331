#include<stdio.h>

int main(){
    int a[100],n;
    printf("Enter number of elements of array\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int odd =0,even=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        if (a[i]%2==1)
        {
            odd++;
        }
        
    }
   printf("Number of even elements: %d\n",even);
   printf("Number of odd elemnts:%d\n",odd);
    return 0;
}