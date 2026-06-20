#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int arr1[10][10], arr2[10][10], arr3[10][10];
    printf("Enter rows and coloumn of matrix A:\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter element of matrix A:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter rows and coloumn of matrix B:\n");
    scanf("%d%d", &r2, &c2);
    printf("Enter element of matrix B:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (r2 = c1)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                arr3[i][j] = 0;
                for (int k = 0; k < c2; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("Resultant matrix:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication not possible:\n");
    }
    return 0;
}