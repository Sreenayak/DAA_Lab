#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int weight[n], profit[n];

    
    printf("\nEnter weights of items:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Weight of Item %d = ", i + 1);
        scanf("%d", &weight[i]);
    }

    
    printf("\nEnter profits of items:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Profit of Item %d = ", i + 1);
        scanf("%d", &profit[i]);
    }

    
    printf("\nEnter knapsack capacity = ");
    scanf("%d", &capacity);

    
    int zk[n + 1][capacity + 1];


    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            if (i == 0 || w == 0)
            {
                zk[i][w] = 0;
            }
            else if (weight[i - 1] <= w)
            {
                zk[i][w] = max(
                    profit[i - 1] + zk[i - 1][w - weight[i - 1]],
                    zk[i - 1][w]
                );
            }
            else
            {
                zk[i][w] = zk[i - 1][w];
            }
        }
    }

    
    printf("\nMaximum Profit = %d\n", zk[n][capacity]);


    int w = capacity;

    printf("Selected Items:\n");

    for (int i = n; i > 0; i--)
    {
        if (zk[i][w] != zk[i - 1][w])
        {
            printf("Item %d (Weight = %d, Profit = %d)\n",
                   i, weight[i - 1], profit[i - 1]);

            w = w - weight[i - 1];
        }
    }

    return 0;
}