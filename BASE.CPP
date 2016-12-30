#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll root_n(ll X, ll n)
{
    ll root = trunc(pow(X, 1.0 / n));
    if (pow(root + 1, n) <= X) {
        return root + 1;
    }
    return root;
}
int main()
{
    ll t, n;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        ll ans = 1;//for base 2
        if(n == 0)
        {
            printf("0\n");
            continue;
        }
        if(n == 1)
        {
            printf("INFINITY\n");
            continue;
        }
        if(n == 2)
        {
            printf("1\n");
            continue;
        }
        if(n == 3)
        {
            printf("2\n");
            continue;
        }
        //cout<<"2 ";
        ll p;

        if(n <= 1000)
        {

            if(n%2 == 0)
                p = n/2;
            else
                p = (n+1)/2;
            for(ll b = 3; b <= p; b++)
            {
                ll k = n;
                while(k >= b)
                {
                    k /= b;
                }
                if(k == 1)
                {
                    //cout<<b<<" ";
                    ans++;
                }
            }
            //cout<<endl;
            cout<<ans+n/2<<"\n";
            continue;
        }
        p = n/2;
        ll exp = 1;
        ll root1 = n, root2 = p;
        ans = 0;
        while(root1 > 1)
        {
            ans += root1 - root2;
            //cout<<root1<<" "<<root2<<" "<<exp<<endl;
            exp++;
            root1 = root_n(n, exp);
            root2 = root_n(p, exp);

            //ans += root1 - root2;
        }
        //cout<<endl;
        cout<<ans<<"\n";
    }
    return 0;
}
