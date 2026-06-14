#include <stdio.h>
#include<limits.h>
int main()
{
    int n, arr[100];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     int first = arr[0], second =INT_MIN;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}