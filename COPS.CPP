#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long int cases;
    scanf("%ld", &cases);
    while(cases--)
    {
        int M, x, y;
        scanf("%d%d%d", &M, &x, &y);
        x *= y;
        int a[M];
        bool police[100] = {false};
        for(int i = 0; i < M; i++)
        {
            scanf("%d", &a[i]);
            a[i]--;
            police[a[i]] = true;
        }
        for(int i = 0; i < M; i++)//for all cops
        {
            for(int j = max(0, a[i] - x); j < a[i]; j++)
                police[j] = true;
            for(int j = min(99, a[i] + x); j >= a[i]; j--)
                police[j] = true;
        }
        int ans = 0;
        for(int i = 0;i < 100; i++)
            if(!police[i])
                ans++;

        printf("%d\n", ans);
    }
    return 0;
}
