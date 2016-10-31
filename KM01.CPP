#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n, m, k, q;
        scanf("%d%d%d%d", &n, &m, &k, &q);
        int a[n];
        for(int i = 0; i < n; i++)
            a[i] = i;

        int x, y;
        while(m--)
        {
            scanf("%d%d", &x, &y);
            x--;y--;//1-based indexing
            int t1 = a[x]; int t2 = a[y];
            a[x] = a[y] = std::min(std::min(x, y), std::min(a[x], a[y]));
            for(int i = 0; i < n; i++)
            {
                if(a[i] == t1 || a[i] == t2)
                {
                    a[i] = a[x];
                }
            }

        }


        int cnt[100001] = {0};
        for(int i = 0; i < n; i++)
        {
            cnt[a[i]]++;
        }

        std::sort(cnt, cnt + n);

        int ans = 0;
        for(int i = 0; i < k; i++)
        {
            ans += cnt[n-i-1];
            if(ans >= q)
                break;
        }
        if(ans >= q)
            printf("Satisfied\n");
        else
            printf("Unsatisfied\n");
    }
    return 0;
}
