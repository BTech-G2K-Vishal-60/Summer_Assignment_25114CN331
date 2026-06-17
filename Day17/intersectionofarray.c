#include<stdio.h>

int main(){
    int a,b,arr1[100],arr2[100];
    printf("Enter the size of array:\n");
    scanf("%d",&a);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array:\n");
    scanf("%d",&b);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("The intersection of the array is:\n");
    for (int i = 0; i < b; i++)
    {
        int found=0;
        for (int j = 0; j < a; j++)
        {
            if (arr1[j]==arr2[i])
            {
                found=1;
                break;
            }
            
        }
        if(found){
            printf("%d\n",arr2[i]);
        }
    }
    
    
    return 0;
}