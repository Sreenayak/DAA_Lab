# Depth-First Search (DFS)

## Overview

This program traverses vertices reachable from a starting vertex by recursively exploring unvisited neighbors, using an adjacency matrix.

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

DFS provides a straightforward traversal of the start vertex's reachable component. The program uses fixed storage for at most 10 vertices and does not traverse other disconnected components automatically.
