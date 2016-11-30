#include<bits/stdc++.h>
using namespace std;
struct subject{
    int a;
    int b;
    int c;
    bool operator<(subject const& s) const
    {
        return c > s.c;
    }
};
int main()
{
    int n, m, sum = 0, mx = 0;
    scanf("%d%d", &n, &m);
    subject sub[n];
    m = m * n;
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &sub[i].a, &sub[i].b, &sub[i].c);
        sum += sub[i].a;
        mx += sub[i].b;
    }
    sort(sub, sub+n);
    if(mx < m)
    {
        printf("-1\n");
        return 0;
    }
    int ans = 0;
    int i = -1;
    while(sum < m)
    {
        i++;
        sum += (sub[i].b - sub[i].a);
    }
    for(int j = 0; j < i; j++)
        ans += (sub[j].b - sub[j].a) / sub[j].c;
    if(sum == m)
        ans += (sub[i].b - sub[i].a) / sub[i].c;
    else
    {
        sum -= (sub[i].b - sub[i].a);
        while(sum < m)
        {
            sum += sub[i].c;
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
