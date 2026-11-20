# Prim's Minimum Spanning Tree

## Overview

This program grows a minimum spanning tree from vertex 0 by repeatedly selecting the least-cost edge from a visited vertex to an unvisited vertex. It uses a cost adjacency matrix.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(V³) for a connected graph |
| Average | O(V³) for a connected graph |
| Worst | O(V³) for a connected graph |

Each of the V - 1 iterations scans the full V × V cost matrix.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(V²) |
| Average | O(V²) |
| Worst | O(V²) |

## Conclusion

For a connected, undirected weighted graph, Prim's algorithm builds a minimum spanning tree and reports its total cost. The program supports at most 10 vertices and reports when the graph is disconnected.
