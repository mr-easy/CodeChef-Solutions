#include<iostream>
#include<math.h>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll ans[100001] = {0};
    //long double mn[100001] = {0};
    ans[0] = a[0];
    //mn[0] = log(a[0]);
    priority_queue<pair<long double, ll> > pq;

    pq.push(make_pair(-log(a[0]), 0));
    for(ll i = 1; i < n; i++)
    {
        while(!pq.empty() && i - pq.top().second > k)
        {
            pq.pop();
        }

        long double mini = -pq.top().first;
        ll idx = pq.top().second;
        if(i - idx == k)
            pq.pop();
        ans[i] = (ans[idx] * a[i]) % 1000000007;
        pq.push(make_pair(-(mini + log(a[i])), i));
    }
    cout<<ans[n-1]<<"\n";
    return 0;
}
