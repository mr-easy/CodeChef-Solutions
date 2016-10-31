#include<stdio.h>
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        long long int n, k;
        scanf("%lld%lld", &n, &k);
        if(k == 0)
        {
            printf("0 %lld\n", n);
        }
        else
        {
            long long int a = n % k;
            long long int b = n/k;
            printf("%lld %lld\n", b, a);
        }
    }
    return 0;
}
