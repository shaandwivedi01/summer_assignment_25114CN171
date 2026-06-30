#include <stdio.h>
int main()
{
    int m, n, i, j, symmetric = 1;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    if (m == n)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (A[i][j] != A[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }
        }

        if (symmetric == 1)
            printf("Matrix is symmetric");
        else
            printf("Matrix is not symmetric");
    }
    else
    {
        printf("Matrix is not symmetric because it is not a square matrix");
    }

    return 0;
}