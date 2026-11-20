# Floyd-Warshall All-Pairs Shortest Paths

## Overview

This program applies the Floyd-Warshall dynamic-programming algorithm to update an adjacency matrix with shortest-path distances between every pair of vertices.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(V³) |
| Average | O(V³) |
| Worst | O(V³) |

The three nested loops always run for all vertex combinations.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(V²) |
| Average | O(V²) |
| Worst | O(V²) |

## Conclusion

Floyd-Warshall computes all-pairs shortest paths and supports negative edge weights when there are no negative cycles. The input matrix must use a consistent representation for unreachable pairs; the program supports at most 10 vertices.
