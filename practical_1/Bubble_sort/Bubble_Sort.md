# Bubble Sort

## Overview

This program sorts the input array in ascending order by repeatedly comparing adjacent elements and swapping them when they are out of order.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n²) |
| Average | O(n²) |
| Worst | O(n²) |

This implementation has no early-exit check, so even an already sorted array takes quadratic time.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(1) |
| Average | O(1) |
| Worst | O(1) |

## Conclusion

Bubble sort is a simple in-place sorting method suitable for small inputs, but its quadratic running time makes it inefficient for large arrays.
