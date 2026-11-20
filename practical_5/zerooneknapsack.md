# 0/1 Knapsack

## Overview

This program uses dynamic programming to compute the maximum profit achievable with the given item weights, profits, and knapsack capacity. Each item can be selected at most once, and the program traces the table to print selected items.

## Time Complexity

Let n be the number of items and W the knapsack capacity.

| Case | Complexity |
|---|---|
| Best | O(nW) |
| Average | O(nW) |
| Worst | O(nW) |

The table is filled completely regardless of the item weights or profits.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(nW) |
| Average | O(nW) |
| Worst | O(nW) |

## Conclusion

The dynamic-programming solution finds an optimal selection for the 0/1 knapsack problem. Its running time and memory use depend on the numeric capacity W, so it is pseudo-polynomial rather than polynomial in the bit-length of the input.
