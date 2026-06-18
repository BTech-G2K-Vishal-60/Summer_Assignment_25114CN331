#include<stdio.h>

int main(){
     int a, b, arr[100], temp;
    printf("Enter size of array:\n");
    scanf("%d", &a);
    printf("Enter elements of array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
       int min=i;
        for (int j = i+1; j < a; j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }
        }
            temp = arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < a; i++)
        {
            printf("%d\n",arr[i]);
        }
        

    return 0;
}