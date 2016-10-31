#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        ll a[n][m], north[n][m], south[n][m], east[n][m], west[n][m];
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        //filling up the north matrix
        for(ll i = 0; i < m; i++)
        {
            north[0][i] = a[0][i];
        }
        for(ll i = 1; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                north[i][j] = a[i][j] + min((ll)0, north[i-1][j]);
            }
        }
        //filling up the south matrix
        for(ll i = 0; i < m; i++)
        {
            south[n-1][i] = a[n-1][i];
        }
        for(ll i = n-2; i >= 0; i--)
        {
            for(ll j = 0; j < m; j++)
            {
                south[i][j] = a[i][j] + min((ll)0, south[i+1][j]);
            }
        }
        //filling up the west matrix
        for(ll i = 0; i < n; i++)
            west[i][0] = a[i][0];
        for(ll i = 0; i < n; i++)
            for(ll j = 1; j < m; j++)
                west[i][j] = a[i][j] + min((ll)0, west[i][j-1]);
        //filling up the east matrix
        for(ll i = 0; i < n; i++)
            east[i][m-1] = a[i][m-1];
        for(ll i = 0; i < n; i++)
            for(ll j = m-2; j >= 0; j--)
                east[i][j] = a[i][j] + min((ll)0, east[i][j+1]);
        ll ans = LLONG_MAX;
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < m; j++)
                ans = min(ans, (north[i][j] + south[i][j] + west[i][j] + east[i][j] - 3*a[i][j]));
        cout<<ans<<"\n";

    }
    return 0;
}
