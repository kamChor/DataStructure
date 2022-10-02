#include <stdio.h>
#include <stdlib.h>
int a[20][20], q[20], visited[20], reach[20], n, f = 0, r = -1, count = 0;
void bfs(int v)
{
    int i;
    for (i = 1; i <= n; i++)
        if (a[v][i] && !visited[i])
        {
            visited[i] = 1;
            q[++r] = i;
        }
    if (f <= r)
        bfs(q[f++]);
}
void dfs(int v)
{
    int i;
    reach[v] = 1;
    for (i = 1; i <= n; i++)
        if (a[v][i] && !reach[i])
        {
            printf("%d->%d\n", v, i);
            count++;
            dfs(i);
        }
}
int main()
{
    int v, ch, i, j;
    printf("\nEnter the number of vertices in graph:  ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        reach[i] = visited[i] = q[i] = 0;
    printf("\nEnter the adjacency matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    do
    {
        printf("\n\n1. BFS: Print all nodes reachable from a given starting node");
        printf("\n2. DFS: Check whether a given graph is connected or not using DFS method.");
        printf("\n3. Exit\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the starting vertex: ");
            scanf("%d", &v);
            bfs(v);
            printf("\nThe nodes that are reachable from %d are: ", v);
            for (i = 1; i <= n; i++)
                if (visited[i])
                    printf("%d ", i);
            break;
        case 2:
            dfs(1);
            if (count == n - 1)
                printf("\nGraph is connected");
            else
                printf("\nGraph is not connected");
            break;
        case 3:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    } while (ch != 3);
    return 0;
}