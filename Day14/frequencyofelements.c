#include<stdio.h>

int main(){
    int a,arr[100],count=0,n;
    printf("Enter the elemnts of array\n");
    scanf("%d",&n);
    printf("Enter elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elemnt of whose frequency you want to find\n");
    scanf("%d",&a);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==a)
        {
            count++;
        }
        
    }
    printf("The frequency of element %d is %d\n",a,count);
    return 0;
}