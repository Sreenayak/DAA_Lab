# Quick Sort

## Overview

This program sorts the array in ascending order using recursive quicksort. Each partition chooses the last element as the pivot and places smaller elements before it.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n log n), with balanced partitions |
| Average | O(n log n) |
| Worst | O(n²), when partitions repeatedly leave one side empty |

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(log n) |
| Average | O(log n) |
| Worst | O(n), due to recursive calls |

## Conclusion

Quicksort is usually fast and sorts in place, but choosing the last element as pivot can lead to quadratic time and deep recursion on unfavorable input. The array in this program has a capacity of 100 elements.
