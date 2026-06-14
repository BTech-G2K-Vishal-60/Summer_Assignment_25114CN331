#include<stdio.h>

int main(){
    int n,arr[100],a,res=0,index;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("Enter the number you want to search\n");
   scanf("%d",&a);
   for (int i = 0; i < n; i++)
   {
    if (arr[i]==a)
    {
        res=1;
        index=i;
    }
   }
   if (res==1)
   {
    printf("The element %d is found at index %d\n",a,index);
   }
   else{
    printf("Element not found\n");
   }
   
    
    return 0;
}