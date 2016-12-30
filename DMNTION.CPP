#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n, a;
		scanf("%lld", &n);
		ll ans = 0;
		ll currency[] = {100, 50, 20, 10, 5, 3, 2, 1};
		for(ll i = 0; i < n; i++)
		{
			cin>>a;
			ll idx = 0;

			while(a > 0)
			{
				if(currency[idx] > a)
					idx++;
				else{
					ans += a/currency[idx];
					a %= currency[idx];
				}
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
