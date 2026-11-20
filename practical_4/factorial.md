# Factorial Using Recursion

## Overview

This program computes the factorial recursively using the relation n! = n × (n - 1)!, with 0! and 1! as base cases.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n) |
| Average | O(n) |
| Worst | O(n) |

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(n) for the recursion stack |
| Average | O(n) for the recursion stack |
| Worst | O(n) for the recursion stack |

## Conclusion

The recursive definition is direct and easy to follow for non-negative integer inputs. The result is stored in an `int`, so it overflows for sufficiently large n; negative inputs are not handled.
