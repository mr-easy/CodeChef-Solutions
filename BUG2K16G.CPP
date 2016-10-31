#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
int mat[100][100];
bool visited[100];
int main()
{
    int cases;
    scanf("%d", &cases);
    for(int t = 1; t <= cases; t++)
    {
        int n, e, w;
        scanf("%d%d%d", &n, &e, &w);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                mat[i][j] = 0;
            visited[i] = false;
        }
        int sw[n], x, y;
        for(int i = 0; i < n; i++)
            scanf("%d", &sw[i]);
        for(int i = 0; i < e; i++)
        {
            scanf("%d%d", &x, &y);
            x--;y--;
            if(sw[x] < w || sw[y] < w)
                continue;
            if(x == y) continue;
            mat[x][y] = 1;
            mat[y][x] = 1;
        }
        queue<int> q;
        bool found = false;
        int node;
        q.push(0);
        while(!q.empty())
        {
            node = q.front();
            q.pop();
            visited[node] = true;
            for(int i = 0; i < n; i++)
            {
                if(i == node) continue;
                if(mat[node][i] == 1 && !visited[i])
                {
                    if(i == n-1)
                        {
                            found= true;
                            break;
                        }
                    q.push(i);
                }
            }
            if(found)
                break;
        }
        if(found)
            printf("Case #%d: YES\n", t);
        else
            printf("Case #%d: NO\n", t);
    }
}
