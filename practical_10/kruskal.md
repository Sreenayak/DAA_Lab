# Kruskal's Minimum Spanning Tree

## Overview

This program repeatedly chooses the smallest remaining edge and uses parent links to avoid adding an edge whose endpoints are already in the same component. It reads the graph from a cost adjacency matrix.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(V³), for a connected graph with V - 1 edges |
| Average | Depends on the graph and edge weights; each edge-selection scan costs O(V²) |
| Worst | O(V⁴), when O(V²) candidate edges are examined |

The implementation repeatedly scans the full adjacency matrix. A single average-case bound requires assumptions about the input graph and its edge weights.

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(V²) |
| Average | O(V²) |
| Worst | O(V²) |

## Conclusion

The program constructs a minimum spanning tree for a connected, undirected weighted graph. Unlike the common edge-list implementation of Kruskal's algorithm, repeatedly scanning the full matrix makes this implementation less efficient. It supports at most 10 vertices.
