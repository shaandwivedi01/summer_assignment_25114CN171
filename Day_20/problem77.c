#include <stdio.h>
int main()
{
    int m, n, o, p, i, j, k;
    printf("Enter rows and columns of matrix A-");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of matrix B-");
    scanf("%d %d", &o, &p);
    int A[m][n], B[o][p], C[m][p];
    printf("Enter elements of matrix A-");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B-");
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if (n == o)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
    else
    {
        printf("multiplication not possible");
    }
    printf("Multiplication of matrix A & B is-");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}