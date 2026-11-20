# Heap Sort Using a Max Heap

## Overview

This program builds a max heap, then repeatedly moves its largest value to the end of the array to produce ascending order.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n), when heapify does not need to recurse (for example, all values are equal) |
| Average | O(n log n) |
| Worst | O(n log n) |

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(1) |
| Average | O(log n) for recursive `heapify` calls |
| Worst | O(log n) for recursive `heapify` calls |

## Conclusion

Heap sort has predictable O(n log n) running time and sorts in place apart from its recursion stack. The array in this program has a capacity of 100 elements.
