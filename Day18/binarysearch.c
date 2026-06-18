#include<stdio.h>

int main(){
    int a, b, arr[100],first,last,middle,temp,k,found=0;
    printf("Enter size of array:\n");
    scanf("%d", &a);
    printf("Enter elements of array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search:\n");
    scanf("%d",&k);
    first = 0,last=a-1;
    while (first<=last)
    {
        int mid = (last+first)/2;
        if (arr[mid]==k)
        {
            printf("Element %d found at index %d",k,mid);
            found =1;
            break;
        }
        else if (arr[mid]<k)
        {
            first = mid +1;
        }
        else{
            last = mid -1;
        }
        
    }
    if (found ==0)
    {
        printf("Element not found");
    }
    
    
    first = 0;last = a-1;
    return 0;
}