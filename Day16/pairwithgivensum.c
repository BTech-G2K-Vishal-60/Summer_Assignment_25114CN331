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
    int sum = 0;
    printf("Enter the sum:\n");
    scanf("%d",&sum);
    int found = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                printf("The pair for the sum is: %d ,%d\n",arr[i],arr[j]);
                found=1;
            }
            
        }
        if (!found)
        {
            printf("Pair not found:\n");
        }
        
    }
    
    return 0;
}