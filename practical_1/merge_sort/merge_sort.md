# Merge Sort

## Overview

This program recursively divides the array into halves, sorts each half, and merges the sorted halves in ascending order.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n log n) |

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(n) for merge storage, plus O(log n) recursion stack |
| Average | O(n) for merge storage, plus O(log n) recursion stack |
| Worst | O(n) for merge storage, plus O(log n) recursion stack |

## Conclusion

Merge sort provides predictable O(n log n) performance, at the cost of auxiliary storage. The merge function uses a temporary array of 100 integers, so each merged range must fit within that capacity.
