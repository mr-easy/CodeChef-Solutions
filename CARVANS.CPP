#include<stdio.h>
using namespace std;
int main()
{
    int cases, current, n, ans, number;
    scanf("%d", &cases);
    while(cases--)
    {
        ans = 1;
        scanf("%d", &n);
        scanf("%d", &current);
        for(int i = 1; i < n; i++)
        {
            scanf("%d", &number);
            if(number <= current)
            {
                ans++;
                current = number;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
