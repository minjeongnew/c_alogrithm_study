#include <cstring>
#include <stdio.h>
#include <queue>
#define MAX 1001
using namespace std;

int dx [] = {-1, 0, 1, 0};
int dy [] = {0, 1, 0, -1};
struct tomato {
    int x, y; // За, ї­
};
queue <tomato> q;
int n, m, result = 0;
int graph[MAX][MAX];

bool isValid(int nx, int ny ) {
    return  (nx >= 0 && nx < n && ny >= m && ny < m );
}
void bfs() {
    while (!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        int i;
        for (i=0;i<4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isValid(nx, ny)==1 && graph[nx][ny] == 0) {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx, ny });
            }
        }
    }
}
int main() {
    scanf("%d %d", &m, &n);
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &graph[i][j]);
            if(graph[i][j] == 1) {
                q.push({ i, j });
            }
        }
    }
    bfs();
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if (graph[i][j] == 0) {
                printf("-1\n");
                return 0;
            }
            if (result < graph[i][j]) {
                result = graph[i][j];
            }
        }
    }
    printf("%d\n", result-1);
    return 0;
}