#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        string s;ll l;
        scanf("%lld", &l);
        cin>>s;

        ll ans = 0, n, j;
        for(ll i = 0; i < l; i++)
        {
            n = 1;
            for(j = i+1; j < l; j++)
            {
                if((s[j-1] + 1 == s[j])  || (s[j-1] == 'z' && s[j] =='a'))
                {
                    n++;
                }
                else
                {
                    break;
                }
            }
            i = j-1;
            ans += n*(n+1)/2;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
