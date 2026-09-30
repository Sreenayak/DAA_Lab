#include <stdio.h>
#include <limits.h>

int main()
{
    int n, amount;

    printf("Enter number of coins: ");
    scanf("%d", &n);

    int coins[n];

    printf("Enter the coin values:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
    }

    printf("Enter the amount: ");
    scanf("%d", &amount);

    int dp[amount + 1];
    int selected[amount + 1];

    dp[0] = 0;
    selected[0] = -1;

    // Initialize DP array
    for (int i = 1; i <= amount; i++)
    {
        dp[i] = INT_MAX;
        selected[i] = -1;
    }

    // Calculate minimum coins
    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX)
            {
                int result = dp[i - coins[j]] + 1;

                if (result < dp[i])
                {
                    dp[i] = result;
                    selected[i] = coins[j];
                }
            }
        }
    }

    // Check if change is possible
    if (dp[amount] == INT_MAX)
    {
        printf("Change cannot be made for the given amount.\n");
    }
    else
    {
        printf("\nMinimum number of coins required = %d\n", dp[amount]);

        printf("Coins selected: ");

        int current = amount;

        while (current > 0)
        {
            printf("%d ", selected[current]);
            current = current - selected[current];
        }

        printf("\n");
    }

    return 0;
}