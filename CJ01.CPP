#include<stdio.h>
#include<set>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        long int n, q, x;
        scanf("%ld%ld", &n, &q);
        set<long int> a;
        for(long int i = 0; i < n; i++)
        {
            scanf("%ld", &x);
            a.insert(x);
        }
        for(long int i = 0; i  < q; i++)
        {
            scanf("%ld", &x);
            if(a.find(x) != a.end())
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
                a.insert(x);
            }
        }
    }
    return 0;
}
