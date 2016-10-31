#include<stdio.h>

int main()
{
    long long int t;
    scanf("%lld", &t);
    while(t--)
    {
        long long int n, a, ans=0;
        scanf("%lld",&n);
        if(n%2==0)
            n--;
        for(long long int i = 0 ;i < n; i++)
        {
            scanf("%llu",&a);
            ans ^= a;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
