#include <stdio.h>

int main()
{
    int a, b, arr[100], temp;
    printf("Enter size of array:\n");
    scanf("%d", &a);
    printf("Enter elements of array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}