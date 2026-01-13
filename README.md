# Prim’s Algorithm in C++

## 📌 Overview

This C++ program demonstrates **Prim’s Algorithm**, a greedy graph algorithm used to find the **Minimum Spanning Tree (MST)** of a connected, weighted, undirected graph.

Prim’s algorithm grows the MST by starting from a chosen vertex and repeatedly adding the **minimum-weight edge** that connects a vertex inside the tree to a vertex outside the tree.

Steps Prim’s Algorithm follows:

1. Start from an arbitrary vertex.
2. Select the minimum-weight edge connected to the MST.
3. Add the selected edge and vertex to the MST.
4. Repeat until all vertices are included.

---

## 🔧 Features

- **Greedy Algorithm Approach**
- **Finds Minimum Spanning Tree (MST)**
- **Efficient Using Priority Queue (Min-Heap)**
- **Adjacency List Graph Representation**
- **Fully Commented Code** for clarity and learning

---

## 📋 Example Run

**Graph Structure (weighted undirected graph):**

```
0 -- 1 (2)
0 -- 3 (6)
1 -- 2 (3)
1 -- 3 (8)
1 -- 4 (5)
2 -- 4 (7)
```

**Output (edges in the Minimum Spanning Tree):**

```
Edge    Weight
0 - 1   2
1 - 2   3
1 - 4   5
0 - 3   6
```

---
