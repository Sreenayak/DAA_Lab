
#include <stdio.h>

int main()
{
    int cost[10][10], visited[10] = {0};
    int n, i, j, edges = 0;
    int min, a = 0, b = 0, total = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix (0 for no edge):\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if (cost[i][j] == 0)
                cost[i][j] = 9999;
        }
    }

    visited[0] = 1;

    printf("\nEdges in Minimum Spanning Tree:\n");

    while (edges < n - 1)
    {
        min = 9999;

        for (i = 0; i < n; i++)
        {
            if (visited[i] == 1)
            {
                for (j = 0; j < n; j++)
                {
                    if (visited[j] == 0 && cost[i][j] < min)
                    {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        if (min == 9999)
        {
            printf("Graph is not connected.\n");
            return 0;
        }

        printf("%d - %d : %d\n", a, b, min);

        total = total + min;
        visited[b] = 1;
        edges++;
    }

    printf("Minimum cost = %d\n", total);

    return 0;
}
