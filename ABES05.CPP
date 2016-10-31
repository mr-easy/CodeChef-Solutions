#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int cases, n;
    ll m;
    scanf("%d", &cases);
    while(cases--)
    {
        scanf("%d%lld", &n, &m);
        set<int> a[n];
        int maxDist[n];
        for(int i  = 0; i < n; i++)
            maxDist[i] = 0;
        int x, y;
        for(ll i = 0; i < m; i++)
        {
            scanf("%d%d", &x, &y);
            x--;y--;
            a[x].insert(y);
        }

        queue<int> q;
        q.push(0);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            int dist = maxDist[node] + 1;
            set<int>::iterator it = a[node].begin();
            for(; it != a[node].end(); ++it)
            {
                int p = *it;
                if(maxDist[p] < dist)
                {
                    maxDist[p] = dist;
                    q.push(p);
                }
            }
        }
        printf("%d\n", maxDist[n-1]-1);
    }
    return 0;
}
