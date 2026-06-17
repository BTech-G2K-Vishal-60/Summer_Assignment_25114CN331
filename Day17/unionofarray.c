#include<stdio.h>

int main(){
    int a,b,arr1[100],arr2[100];
    printf("Enter the size of first array:\n");
    scanf("%d",&a);
    printf("Enter elements of first array\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second element:\n");
    scanf("%d",&b);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("The union of the array are:\n"); 
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",arr1[i]);
    }
       for (int i = 0; i < b; i++)
       {
        int found = 0;
        for (int j = 0; j < a; j++)
        {
            if(arr2[i]==arr1[j]){
                found=1;
                break;
            }
        }
        if (!found)
        {
            printf("%d\n",arr2[i]);
        }
        
       }
       
    return 0;
}