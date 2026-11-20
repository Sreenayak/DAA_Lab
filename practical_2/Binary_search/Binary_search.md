# Binary Search

## Overview

This program searches for a key by repeatedly halving the remaining search interval. It expects the input values to be in ascending order.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(1), if the key is at the first midpoint |
| Average | O(log n) |
| Worst | O(log n) |

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(1) |
| Average | O(1) |
| Worst | O(1) |

## Conclusion

Binary search is efficient for searching sorted data. Its result is not reliable if the supplied array is not in ascending order. The array in this program has a capacity of 100 elements.
