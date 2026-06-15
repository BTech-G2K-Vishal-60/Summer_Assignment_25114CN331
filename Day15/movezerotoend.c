#include<stdio.h>

int main(){
    int a,arr[100],j=0;
    printf("Enter number of elements of array\n");
    scanf("%d",&a);
    printf("Enter element of array\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
        
    }
    while (j<a)
    {
        arr[j]=0;
        j++;
    }
    printf("Array after zeros to the end:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}