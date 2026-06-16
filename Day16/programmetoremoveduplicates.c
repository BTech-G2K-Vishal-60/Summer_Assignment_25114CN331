#include<stdio.h>

int main(){
    int a,arr[100],count;
    printf("Enter number of elements of array\n");
    scanf("%d",&a);
    printf("Enter element of array\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array after removing duplicate values:\n");
    for (int i = 0; i < a; i++)
    {
        int duplicate = 0;
        for (int j = i+1; j < a; j++)
        {
            if(arr[i]==arr[j]){
                duplicate =1;
                break;
            }
        }
        if(!duplicate)
        {
            printf("%d",arr[i]);
            
        }
        
    }
    
    return 0;
}