#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, a;
        cin>>n;
        set<ll> s;
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld", &a);
            if(s.find(a) != s.end()){
                s.erase(a);
            }else{
                s.insert(a);
            }
        }
        printf("%lld\n", *(s.begin()));
    }
    return 0;
}
