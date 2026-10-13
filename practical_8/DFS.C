
#include <stdio.h>

int graph[10][10], visited[10];
int n;

void DFS(int current)
{
    int i;

    visited[current] = 1;
    printf("%d ", current);

    for (i = 0; i < n; i++)
    {
        if (graph[current][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("DFS Traversal: ");
    DFS(start);

    return 0;
}
