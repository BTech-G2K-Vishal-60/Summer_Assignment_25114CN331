#include<stdio.h>

int main(){
    int n,a[100];
    printf("Enter no of elements of array:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (int k = 0; k < n; k++)
    {   
        scanf("%d",&a[k]);
    }
    printf("The array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }    
    
    return 0;
}