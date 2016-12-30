#include<bits/stdc++.h>
#define ll long long int
#define MAX 100000
using namespace std;
ll binarySearch(ll a[], ll beg, ll end, ll val)
{
    ll n = end+1;
    ll idx = -1;
    ll mid = (beg + end) / 2;
    while(beg < end)
    {
        if(a[mid] == val)
        {
            return mid;
        }
        else if(val < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (int) (beg + end)/2;
    }
    while(a[mid] > val && mid > 0)
        mid--;
    while(a[mid] < val && mid < n)
        mid++;
    if(mid == n)
        return mid-1;
    return mid;
}
int main()
{
    ll cases;
    cin>>cases;
    while(cases--)
    {
        ll n, m;
        cin>>n>>m;
        ll ans[n];
        vector< pair<ll, ll> > a(n);
        ll left[n], right[n];
        for(ll i = 0; i < n; i++)
        {
            cin>>a[i].first;
            a[i].second = i;
            ans[i] = 0;
            left[i] = -1;
            right[i] = n;
        }
        vector< pair<ll, ll> > copyA(a);
        sort(a.begin(), a.end(), std::greater< pair<ll, ll> >());

        stack<ll> stk;
        for(ll i = 0; i < n; i++)
        {
            ll q = -1;
            while(!stk.empty())
            {
                q = stk.top();
                if(copyA[q] <= copyA[i])
                {
                    right[q] = i;
                    stk.pop();
                }
                else
                {
                    break;
                }
            }
            left[i] = q;
            if(stk.empty())
                left[i] = -1;
            stk.push(i);
        }
        /*
        for(ll i = 0; i < n; i++)
            cout<<left[i]<<" ";
        cout<<endl;
        for(ll i = 0; i < n; i++)
            cout<<right[i]<<" ";
        cout<<endl;*/
        for(ll i = 0; i < n; i++)
        {
            ll idx = a[i].second;

            ans[i] = (right[idx] - idx) * (idx - left[idx]);
            if(i != 0)
                ans[i] += ans[i-1];
        }
        /*
        for(ll i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;*/
        ll p;
        while(m--)
        {
            cin>>p;
            cout<<a[binarySearch(ans, 0, n-1, p)].first<<"\n";
        }
    }
    return 0;
}
