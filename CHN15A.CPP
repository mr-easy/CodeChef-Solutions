#include<stdio.h>
using namespace std;
int main()
{
    int t, n, k;
    long int a;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &k);
        int ans = 0;
        while(n--)
        {
            scanf("%ld", &a);
            if((a+k)%7 == 0)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
