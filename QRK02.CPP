#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll n, m, x, y;
        ll mx = 0;
        scanf("%lld%lld", &n, &m);
        ll a[n];
        bool visited[n];
        for(int i = 0; i < n; i++){
            visited[i] = false;
        }
        vector< set<ll> > neigh;
        neigh.resize(n);
        while(m--)
        {
            scanf("%lld%lld", &x, &y);
            x--;y--;
            if(x == y)
                continue;
            neigh[x].insert(y);
            neigh[y].insert(x);
        }

        for(ll i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        queue<ll> q;
        mx = 0;
        ll nodesVisited = 0;

        for(ll i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                q.push(i);
                ll calc = 0;
                while(!q.empty())
                {
                    ll node = q.front();
                    q.pop();
                    visited[node] = true;
                    nodesVisited++;
                    calc += a[node];
                    for(set<ll>::iterator it = neigh[node].begin(); it != neigh[node].end(); ++it)
                    {
                        if(!visited[*it])
                        {
                            q.push(*it);
                            visited[*it] = true;
                        }
                    }
                    //cout<<node<<"yo ";
                }
                //cout<<"\n"<<calc<<"\n";
                if(calc > mx)
                    mx = calc;
            }
        }
        printf("%lld\n", mx);
    }
    return 0;
}
