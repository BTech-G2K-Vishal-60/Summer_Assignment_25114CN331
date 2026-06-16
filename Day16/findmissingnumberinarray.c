#include<stdio.h>

int main(){
    int arr[100],n,num,sum=0,k=0;
    printf("Enter range of array:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (int i = 1; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sum =n*(n+1)/2;
    for (int i = 1; i < n; i++)
    {
        k+=arr[i];
    }
    num=sum-k;
    printf("Missing number %d\n",num);
    return 0;
}