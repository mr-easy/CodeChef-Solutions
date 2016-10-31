#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, x, q, k, ans, i;
    cin>>n;
    ll a[n];
    cin>>a[0];
    for(ll i = 1; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    ll sum[n];
    sum[0] = a[0];
    for(ll i = 1; i < n; i++)
        sum[i] = a[i] + sum[i-1];
    cin>>q;
    while(q--)
    {
        cin>>k;
        k++;
        ll j = ceil((1.0*n)/k);
        cout<<sum[j-1]<<"\n";
    }
    return 0;
}
