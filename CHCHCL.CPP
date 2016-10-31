#include<stdio.h>
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        long long int m, n;
        scanf("%lld%lld", &m, &n);
        m--;
        n--;
        long long int a = (m*n + m + n);
        if(a%2 == 0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
