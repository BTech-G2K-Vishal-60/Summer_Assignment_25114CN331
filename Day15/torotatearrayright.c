#include<stdio.h>

int main(){
    int a,arr[100],last;
    printf("Enter number of elements of array:\n");
    scanf("%d",&a);
    printf("Enter elements of array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    last=arr[a-1];
    for (int i = a-1; i > 0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    printf("Right rotated array:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}