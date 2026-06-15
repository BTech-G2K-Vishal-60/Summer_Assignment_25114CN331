#include<stdio.h>

int main(){
    int a,arr[100],temp;
    printf("Enter number of elements of array\n");
    scanf("%d",&a);
    printf("Enter element of array\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[a-i-1];
        arr[a-i-1]=temp;
    }
    printf("The reverse of array is:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}