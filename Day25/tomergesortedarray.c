#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], a, b;
    printf("Enter size of first sorted array:\n");
    scanf("%d", &a);
    printf("Enter element of first sorted array\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array:\n");
    scanf("%d", &b);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[a + b], i = 0, j = 0, k = 0;
    while (i < a && j < b)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < a)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < b)
    {
        arr3[k++] = arr2[j++];
    }
    printf("Mereged array:\n");
    for (int i = 0; i < a + b; i++)
    {
        printf("%d", arr3[i]);
    }

    return 0;
}