#include <stdio.h>

#define MAX 100

int main() {
    int graph[MAX][MAX];
    int visited[MAX] = {0};
    int queue[MAX];
    int n, edges, i, u, v;
    int front = 0, rear = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges:\n");
    for (i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("BFS Traversal: ");

    queue[rear++] = 0;
    visited[0] = 1;

    while (front < rear) {
        u = queue[front++];
        printf("%d ", u);

        for (v = 0; v < n; v++) {
            if (graph[u][v] == 1 && visited[v] == 0) {
                queue[rear++] = v;
                visited[v] = 1;
            }
        }
    }

    return 0;
}
