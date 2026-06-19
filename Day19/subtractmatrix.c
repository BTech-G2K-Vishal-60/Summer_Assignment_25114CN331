#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter rows and coloumn:\n");
    scanf("%d%d", &r, &c);
    int arr1[r][c], arr2[r][c], arr3[r][c];
    printf("Enter element of matrix A:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter element of matrix B:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("Sum of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\n", arr3[i][j]);
        }
    }

    return 0;
}