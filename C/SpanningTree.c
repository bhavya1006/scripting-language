#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_VERTICES 100

struct Graph {
    int numVertices;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
};

struct Edge {
    int src;
    int dest;
    int weight;
};

// Create a graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    // Initialize the adjacency matrix with zeros
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph->adjacencyMatrix[i][j] = 0;
        }
    }

    return graph;
}

// Add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest, int weight) {
    graph->adjacencyMatrix[src][dest] = weight;
    graph->adjacencyMatrix[dest][src] = weight;
}

// Find the vertex with the minimum key value
int findMinKeyVertex(int key[], int mstSet[], int numVertices) {
    int minKey = INT_MAX;
    int minIndex = -1;

    for (int v = 0; v < numVertices; v++) {
        if (mstSet[v] == 0 && key[v] < minKey) {
            minKey = key[v];
            minIndex = v;
        }
    }

    return minIndex;
}

// Print the Minimum Spanning Tree
void printMST(int parent[], struct Graph* graph) {
    printf("Edge \tWeight\n");

    for (int v = 1; v < graph->numVertices; v++) {
        printf("%d - %d \t%d\n", parent[v], v, graph->adjacencyMatrix[v][parent[v]]);
    }
}

// Construct and print the Minimum Spanning Tree using Prim's algorithm
void primMST(struct Graph* graph) {
    int parent[MAX_VERTICES];
    int key[MAX_VERTICES];
    int mstSet[MAX_VERTICES];

    // Initialize all keys as infinite and mstSet as 0
    for (int v = 0; v < graph->numVertices; v++) {
        key[v] = INT_MAX;
        mstSet[v] = 0;
    }

    // Start with the first vertex
    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < graph->numVertices - 1; count++) {
        // Find the vertex with the minimum key value
        int u = findMinKeyVertex(key, mstSet, graph->numVertices);

        // Add the vertex to the Minimum Spanning Tree
        mstSet[u] = 1;

        // Update the key value and parent index of the adjacent vertices
        for (int v = 0; v < graph->numVertices; v++) {
            if (graph->adjacencyMatrix[u][v] != 0 && mstSet[v] == 0 && graph->adjacencyMatrix[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph->adjacencyMatrix[u][v];
            }
        }
    }

    // Print the Minimum Spanning Tree
    printMST(parent, graph);
}

int main() {
    int numVertices = 6;
    struct Graph* graph = createGraph(numVertices);

    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 2, 2);
    addEdge(graph, 1, 2, 1);
    addEdge(graph, 1, 3, 5);
    addEdge(graph, 2, 3, 8);
    addEdge(graph, 3, 4, 6);
    addEdge(graph, 4, 5, 3);

    primMST(graph);

    return 0;
}
