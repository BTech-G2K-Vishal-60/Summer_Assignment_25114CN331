#include<stdio.h>

int main(){
    int a,arr[100],first;
    printf("Enter number of elements of array:\n");
    scanf("%d",&a);
    printf("Enter elements of array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    first=arr[0];
    for (int i = 0; i < a-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[a-1]=first;
    printf("Right rotated array:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}