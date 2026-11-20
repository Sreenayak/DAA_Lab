# Minimum Coin Change

## Overview

This program uses dynamic programming to find the minimum number of coins needed to make a target amount, assuming an unlimited supply of each entered coin denomination. It also records and prints one selection of coins.

## Time Complexity

Let A be the target amount and C the number of coin denominations.

| Case | Complexity |
|---|---|
| Best | O(A × C) |
| Average | O(A × C) |
| Worst | O(A × C) |

The program checks every denomination for every amount.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(A) |
| Average | O(A) |
| Worst | O(A) |

## Conclusion

The dynamic-programming approach finds a minimum-coin solution when one exists. Coin denominations must be positive; a zero or negative denomination is not valid for this implementation.
