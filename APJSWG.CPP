#include<bits/stdc++.h>
#define ll long int
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool flag = true;
        ll ans = 0;
        for(ll i = 0; i < n; i++)
        {
            if(a[i] - (i+1) > 2)
            {
                flag = false;
                break;
            }
            for(ll j = i-1; j >= 0; j--)
            {
                if(a[i] < a[j])
                    ans++;
            }
        }
        if(flag)
            printf("%ld\n", ans);
        else
            printf("Not Allowed\n");
    }
    return 0;
}
