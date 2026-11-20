# Traveling Salesperson Problem (TSP)

## Overview

This program uses memoized recursion and a bitmask of visited cities to find a minimum-cost tour starting and ending at city 0.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n² × 2ⁿ) |
| Average | O(n² × 2ⁿ) |
| Worst | O(n² × 2ⁿ) |

Memoized recursion considers O(n × 2ⁿ) states and up to n transitions per state.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(n × 2ⁿ) for the memoization table, plus O(n) recursion stack |
| Average | O(n × 2ⁿ) for the memoization table, plus O(n) recursion stack |
| Worst | O(n × 2ⁿ) for the memoization table, plus O(n) recursion stack |

## Conclusion

The bitmask dynamic-programming solution finds an optimal tour for small instances, but its exponential time and memory requirements limit its scale. The fixed arrays in this program support at most 10 cities.
