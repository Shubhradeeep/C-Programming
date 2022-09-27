#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
// An utility function to find the verticex with minimum distance value
int minDistance(int V, int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (sptSet[v] == 0 && dist[v] <= min) min = dist[V], min_index = v;
    return min_index;
}
// An utility function to print the constructed distance array
void printSolution(int V, int dist[]) {
    printf("Vertex\t\tDistance from source\n");
    for (int i = 0; i < V; i++) printf("%d\t\t%d\n", i, dist[i]);
    printf("AITI ;-)");
}
void dijkstra(int src, int V, int graph[V][V]) {
    int dist[V]; // The output array
    bool sptSet[V];
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(V, dist, sptSet);
        sptSet[u] = 1;
        for (int v = 0; v < V; v++)
            /*Update dist[v] only if it is not in sptSet, there's an edge from u to V and total weight of path from src to v through u is smaller the current val of dist[v]*/
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) dist[v] = dist[u] + graph[u][v];
    }
    printSolution(V, dist);
}
// Driver Code
int main()
{
    int V, source;
    printf("Enter no. of vertices of the graph> "), scanf("%d", &V);
    int graph[V][V];
    printf("Enter the matrix of pairs(if there's no direct path then enter '0')>\n");
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            scanf("%d", &graph[i][j]);
    printf("Enter the source(in integer)> "), scanf("%d", &source);
    dijkstra(source, V, graph);
    return 0;
}




/* output:
7     in
0 3 0 2 0 0 6   
0 0 6 0 1 0 0   
0 0 0 0 0 1 0   
0 2 0 0 3 0 0   
0 0 0 0 0 4 0   
0 0 0 0 0 0 0   
0 0 0 0 0 2 0  
0     in
0  0     out
1  3     out
2  9     out
3  2     out
4  4     out
5  8     out
6  6     out */
