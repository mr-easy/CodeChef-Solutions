#include<iostream>
#define MOD 1000000007
#define ll long long int
using namespace std;
ll power(ll a, ll b)
{
    if(b == 0)
        return 1;
    ll x = power(a, b/2);
    if(b % 2 != 0)
    {
        return (((x*x)%MOD)*a)%MOD;
    }
    else
    {
        return (x*x)%MOD;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans;
        if(n % 2 != 0)//odd
        {
            cout<<"0\n";
        }
        else
        {
            ll cnt = n/2;
            cnt--;
            ans = power(10, cnt);
            ans *= 9;
            ans %= MOD;
            cout<<ans<<"\n";
        }
    }
    return 0;
}
