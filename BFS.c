#include <stdio.h>

int a[10][10], q[10], vis[10], n, i, j, front = 0, rear = -1;
void bfs(int v);

void main()
{
    int v;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        q[i] = 0;
        vis[i] = 0;
    }
    printf("\n Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            scanf("%d", &a[i][j]);
        }
    }


    printf("\n Enter the starting vertex:");
    scanf("%d", &v);
    bfs(v);
    printf("\n The node which are reachable are:\n");
    for (i = 1; i <= n; i++){
              if (vis[i]){
            printf("%d\t", i);
              }
    }

}

void bfs(int v)
{
    for (i = 1; i <= n; i++)
        if (a[v][i] && !vis[i])
            q[++rear] = i;
    if (front <= rear)
    {
        vis[q[front]] = 1;
        bfs(q[front++]);
    }
}
