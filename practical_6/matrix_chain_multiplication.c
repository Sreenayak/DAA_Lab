#include <stdio.h>

int main()
{
    int n, i, j, k, l;
    int p[20], m[20][20];
    int min, cost;

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    printf("Enter %d dimensions: ", n + 1);
    for (i = 0; i <= n; i++)
        scanf("%d", &p[i]);

    // Cost of multiplying one matrix is 0
    for (i = 1; i <= n; i++)
        m[i][i] = 0;

    // l = chain length
    for (l = 2; l <= n; l++)
    {
        for (i = 1; i <= n - l + 1; i++)
        {
            j = i + l - 1;
            m[i][j] = 999999;

            for (k = i; k < j; k++)
            {
                cost = m[i][k] + m[k + 1][j]
                       + p[i - 1] * p[k] * p[j];

                if (cost < m[i][j])
                    m[i][j] = cost;
            }
        }
    }

    printf("Minimum number of multiplications = %d\n", m[1][n]);

    return 0;
}