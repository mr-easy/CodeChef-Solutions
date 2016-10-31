#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x, y;
        scanf("%d", &n);
        bool invi = false;
        int clas[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                scanf("%d", &clas[i][j]);
                if(clas[i][j] == 5)
                {
                    invi = true;
                    x = i;
                    y = j;
                }
            }
        }
        if(invi)
        {
            long long int ans = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(i==x && j == y)
                    {
                        continue;
                    }
                    if(clas[i][j] == 0)
                        continue;
                    ans += abs(i - x) + abs(j - y);
                    //printf("%lld ", ans);
                }
            }
            printf("%lld\n", ans);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
