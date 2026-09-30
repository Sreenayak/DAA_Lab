#include <stdio.h>

int m[20][20];
int s[20][20];
int p[20];

void printOrder(int i, int j)
{
    if(i == j)
    {
        printf("A%d", i);
        return;
    }

    printf("(");

    printOrder(i, s[i][j]);
    printOrder(s[i][j] + 1, j);

    printf(")");
}

int main()
{
    int n, i, j, k, len;
    int cost;

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    printf("Enter dimensions: ");
    for(i = 0; i <= n; i++)
        scanf("%d", &p[i]);

    for(i = 1; i <= n; i++)
        m[i][i] = 0;

    for(len = 2; len <= n; len++)
    {
        for(i = 1; i <= n - len + 1; i++)
        {
            j = i + len - 1;
            m[i][j] = 999999;

            for(k = i; k < j; k++)
            {
                cost = m[i][k] + m[k + 1][j]
                     + p[i - 1] * p[k] * p[j];

                if(cost < m[i][j])
                {
                    m[i][j] = cost;
                    s[i][j] = k;
                }
            }
        }
    }

    printf("\nMinimum multiplication cost = %d\n", m[1][n]);

    printf("Optimal multiplication order = ");
    printOrder(1, n);

    printf("\n");

    return 0;
}