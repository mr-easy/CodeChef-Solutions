#include<stdio.h>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[1005] = {0};
        for(int i = 0; i < m; i++)
        {
            int t;
            scanf("%d", &t);
            a[t-1] = -1;   //completed tasks are represented as -1.
        }
        bool chefChance = true;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != -1)
            {
                if(chefChance)
                {
                    printf("%d ", i+1);
                    a[i] = -1;
                    chefChance =  false;
                }
                else
                {
                    chefChance = true;
                }
            }
        }
        printf("\n");
        for(int i = 0; i < n; i++)
        {
            if(a[i] != -1)
                printf("%d ", i+1);
        }
        printf("\n");
    }
    return 0;
}
