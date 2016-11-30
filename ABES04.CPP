//Check for number of connected graph
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        ll n, m, a, b;
        scanf("%lld%lld", &n, &m);
        bool visited[1000001] = {false};
        bool matrix[n][n];
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
                matrix[i][j] = false;
        }
        while(m--)
        {
            scanf("%lld%lld", &a, &b);
            a--;
            b--;
            matrix[a][b] = true;
            matrix[a][b] = true;
        }
        queue<int> q;
        q.push(0);
        ll ans = 0;
        do{
            ans++;
            while(!q.empty())
            {
                ll node = q.front();
                q.pop();
                visited[node] = true;
                for(ll i = 0; i < n; i++)
                {
                    if(visited[i])
                    {
                        continue;
                    }
                    if(matrix[node][i] || matrix[i][node])
                    {
                        q.push(i);
                    }
                }
            }
            for(ll i = 0; i < n; i++)
            {
                if(!visited[i])
                {
                    q.push(i);
                    break;
                }
            }
        }while(!q.empty() && ans <= 3);
        if(ans == 3 || ans == 2)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
