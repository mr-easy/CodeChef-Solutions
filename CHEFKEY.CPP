#include<stdio.h>
int main()
{
    int cases;
    scanf("%d", &cases);
    long int c, n, m;
    long long int ans;
    while(cases--)
    {
        ans = 0;
        scanf("%ld%ld%ld", &n, &m, &c);
        for(long int i = 1; i <= c; i++)
        {
            if((c%i) == 0)
            {
                if(i <= n && (c/i) <= m)
                {
                    //printf("%ld %ld\n", i, c/i);
                    ans++;
                }
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
