#include<iostream>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    ll cases;
    cin>>cases;
    while(cases--)
    {
        string s;
        cin>>s;
        ll ans = 0;
        ll l = s.size();
        for(ll i = 1; i < l; i++)
        {
            if(s[i] == '>' && s[i-1] == '<')
                ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
