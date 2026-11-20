# Matrix Chain Multiplication

## Overview

This program uses dynamic programming to find the minimum number of scalar multiplications needed to multiply a chain of matrices. It also prints an optimal parenthesization.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n³) |
| Average | O(n³) |
| Worst | O(n³) |

Here, n is the number of matrices.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(n²) |
| Average | O(n²) |
| Worst | O(n²) |

The cost and split tables have quadratic size.

## Conclusion

The algorithm finds an optimal multiplication order without changing the order of the matrices. The global tables have capacity for at most 19 matrices, and the input dimensions must be positive and within the program's integer range.
