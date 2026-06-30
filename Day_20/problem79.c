#include <stdio.h>
int main()
{

    int m, n, i, j;
    printf("Enter rows and columns of the matrix-");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter matrix A\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    int sum;

    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + A[i][j];
        }
        printf("sum of row %d elements is %d\n", i + 1, sum);
    }
    return 0;
}