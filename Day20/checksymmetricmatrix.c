#include <stdio.h>

int main()
{
    int a, flag = 1;
    printf("Enter order of matrix:\n");
    scanf("%d", &a);
    int arr[a][a];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        printf("The matrix is symmetric:\n");
    }
    else
    {
        printf("The matrix is not symmetric:\n");
    }

    return 0;
}