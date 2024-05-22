# graph.cpp
This C++ program creates a 5x5 adjacency matrix representing a graph. Users input relationships between nodes, and the matrix reflects these connections. It's a concise tool for visualizing graph structures.
**Algorithm Explanation:**
**Initialization:**

The program initializes a 5x5 adjacency matrix, graph, with all elements set to 0. This matrix will represent the connections between nodes in the graph.
Input Relationships (Edges):

Using nested loops, the program iterates over each pair of nodes (i, j), excluding self-loops (where i = j).
For each pair, the program prompts the user: "Is there a relationship (edge) from node i to node j?".
If the user inputs "yes", the program updates the corresponding entry in the adjacency matrix graph[i][j] to 1, indicating the presence of a relationship between node i and node j.
**Displaying the Adjacency Matrix:**

After all inputs are received, the program prints the resulting adjacency matrix, displaying the graph's structure.

**Code Explanation:
Initialization:**

The program declares a 5x5 integer array graph and initializes it with zeros using the syntax {0}. This array serves as the adjacency matrix.
Input Relationships:

Using nested for loops, the program iterates over each pair of nodes (i, j) excluding self-loops.
Within the loops, it prompts the user to input whether there is a relationship from node i to node j. The user's input is stored in the response variable.
If the user confirms the relationship (by entering "yes"), the corresponding element in the graph matrix is set to 1, indicating the presence of an edge from node i to node j.
**Displaying the Adjacency Matrix:**

After all inputs are received, the program prints the resulting adjacency matrix using nested loops.
It iterates over each row and column of the graph matrix and prints the corresponding element

