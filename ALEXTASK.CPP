#include<stdio.h>
#include<climits>
#include<algorithm>
long long int lcm(long long int a, long long int b)
{
    long long int x = a, y = b, t, gcd, lcm;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    gcd = a;
    lcm = (x*y)/gcd;
    return lcm;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        long long int a[n];
        long long int mn1 = LLONG_MAX, mn2 = LLONG_MAX;
        for(long long int i = 0; i < n; i++)
        {
            scanf("%lld", a+i);
            /*
            if(mn1 > a[i])
            {
                mn2 = mn1;
                mn1 = a[i];
            }
            else if(mn2 > a[i])
            {
                mn2 = a[i];
            }*/
        }
        std::sort(a, a+n);
        long long int ans = LLONG_MAX, l;
        for(long long int i = 0; i < n; i++)
        {
            for(long long int j = 0; j < n; j++)
            {
                if(i == j)
                    continue;
                l = lcm(a[i], a[j]);
                if(l < ans)
                    ans = l;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
