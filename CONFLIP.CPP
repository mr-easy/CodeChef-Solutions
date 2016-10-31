#include<stdio.h>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int g;
        scanf("%d", &g);
        while(g--)
        {
            long long int n;
            int i, q;
            scanf("%d%lld%d", &i, &n, &q);
            if(n%2 == 0)
            {
                long long int ans = n / 2;
                printf("%lld\n",ans);
            }
            else if(i == 1) //starting with all Heads
            {
                if(q == 1)
                {
                    long long int ans = n / 2;
                    printf("%lld\n",ans);
                }
                else
                {
                    long long int ans = n / 2;
                    ans += 1;
                    printf("%lld\n",ans);
                }
            }else  //all Tails
            {
                if(q == 1)
                {
                    long long int ans = n / 2;
                    ans += 1;
                    printf("%lld\n",ans);
                }
                else
                {
                    long long int ans = n / 2;
                    printf("%lld\n",ans);
                }
            }
        }
    }
    return 0;
}
