# Buildings Receiving Sunlight

## Overview

This program scans building heights from left to right. A building is counted when it is taller than every building seen earlier. It also reports the tallest counted building.

## Time Complexity

| Case | Complexity |
|---|---|
| Best | O(n) |
| Average | O(n) |
| Worst | O(n) |

## Space Complexity

| Case | Extra space |
|---|---|
| Best | O(1) |
| Average | O(1) |
| Worst | O(1) |

The fixed input array holds at most 8 building heights and is excluded from extra space.

## Conclusion

The program finds the buildings that receive sunlight from the left in one pass. Its input array supports at most 8 buildings, and the current initialization assumes building heights are positive.
