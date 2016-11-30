#include<iostream>
#define ll long long int
#define MOD 1000000007
using namespace std;
ll fast_pow(ll base, ll n)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    ll halfn=fast_pow(base,n/2);
    if(n%2==0)
        return ( halfn * halfn ) % MOD;
    else
        return ( ( ( halfn * halfn ) % MOD ) * base ) % MOD;
}
int main()
{
    int t;
    cin>>t;
    ll n, a;
    while(t--)
    {
        cin>>n;
        if(n <= 2)
            cout<<"0\n";
        else if (n == 3)
        {
            cout<<"2\n";
        }
        else
        {
            a = fast_pow(2, n-1) - 2;
            cout<<a<<"\n";
        }
    }
    return 0;
}
