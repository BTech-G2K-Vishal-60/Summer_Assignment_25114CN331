#include<stdio.h>

int main(){
    int a,b,arr1[100],arr2[100],arr3[200];
    printf("Enter the size of first array:\n");
    scanf("%d",&a);
    printf("Enter the elements of first array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array:\n");
    scanf("%d",&b);
    printf("Enter the elements of second array:\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < a; i++)
    {
        arr3[i]=arr1[i];
    }
    for (int i = 0; i < b; i++)
    {
        arr3[a+i]=arr2[i];
    }
    printf("The merged array is:\n");
    for (int i = 0; i < a+b; i++)
    {
        printf("%d\n",arr3[i]);
    }
    
    return 0;
}