//Nearest cab
#include<stdio.h>
int main()
{
    int cases, n, m;
    scanf("%d", &cases);
    while(cases--)
    {
        scanf("%d%d", &n, &m);
        long long int x[n], y[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%lld%lld", &x[i], &y[i]);
        }
        long long int sx[m], sy[m], dx[m], dy[m], minDist, calc;
        int idx;
        for(int j = 0; j < m; j++)
        {
            scanf("%lld%lld%lld%lld", &sx[j], &sy[j], &dx[j], &dy[j]);
        }
        for(int j = 0; j < m; j++)
        {
            //Finding nearest cab
            minDist = ((sx[j] - x[0])*(sx[j] - x[0])) + ((sy[j] - y[0])*(sy[j] - y[0]));
            idx = 0;
            for(long long int i = 1; i < n; i++)
            {
                calc = ((sx[j] - x[i])*(sx[j] - x[i])) + ((sy[j] - y[i])*(sy[j] - y[i]));
                if(calc < minDist)
                {
                    minDist = calc;
                    idx = i;
                }
            }
            x[idx] = dx[j]; y[idx] = dy[j];
            printf("%d\n", idx+1);
        }
    }
    return 0;
}
