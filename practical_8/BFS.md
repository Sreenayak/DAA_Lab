# Breadth-First Search (BFS)

## Overview

This program traverses vertices reachable from a starting vertex in breadth-first order, using a queue and an adjacency matrix.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(V) for traversal when only the starting vertex is reachable |
| Average | O(VR), depending on the number R of vertices reachable from the start |
| Worst | O(V²), when all vertices are reachable |

The program also reads the full adjacency matrix, which takes O(V²) time regardless of reachability.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(V) |
| Average | O(V) |
| Worst | O(V) |

## Conclusion

BFS visits reachable vertices in order of increasing edge distance from the start in an unweighted graph. The program uses fixed storage for at most 10 vertices and does not traverse disconnected components unless started there separately.
