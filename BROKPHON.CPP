#include<stdio.h>
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int a[n];
        for(long long int i = 0; i < n; i++)
            scanf("%lld", a+i);
        long long int ans = 0;
        for(long long int i = 1; i < n; i++)
        {
            if(a[i] != a[i-1])
            {
                if(i == 1)
                    ans += 2;
                else if(a[i-1] == a[i-2])
                    ans += 2;
                else
                    ans++;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
