#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter rows and coloumn of matrix:\n");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += arr[i][j];
        }
        printf("Sum of column %d is %d\n", j + 1, sum);
    }

    return 0;
}