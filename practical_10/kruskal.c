
#include <stdio.h>

int main()
{
    int cost[10][10], parent[10];
    int n, i, j, a, b, min;
    int edges = 0, total = 0;

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
        parent[i] = i;
    }

    printf("\nEdges in Minimum Spanning Tree:\n");

    while (edges < n - 1)
    {
        min = 9999;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        if (min == 9999)
            break;

        i = a;
        while (parent[i] != i)
            i = parent[i];

        j = b;
        while (parent[j] != j)
            j = parent[j];

        if (i != j)
        {
            printf("%d - %d : %d\n", a, b, min);
            total += min;
            parent[j] = i;
            edges++;
        }

        cost[a][b] = 9999;
        cost[b][a] = 9999;
    }

    if (edges == n - 1)
        printf("Minimum cost = %d\n", total);
    else
        printf("Graph is not connected.\n");

    return 0;
}
