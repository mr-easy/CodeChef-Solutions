#include<stdio.h>
using namespace std;
long long int maximum(long long int* a, long long int n)
{
    long long int mx = -1000000000000;
    for(long long int i =0 ;i < n; i++)
    {
        if(a[i] >= mx)
            mx = a[i];
    }
    return mx;
}
long long int max(long long int a, long long int b)
{
    if(a > b)
        return a;
    return b;
}
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        long long int n, k;
        long long int sum = 0;
        scanf("%lld%lld", &n, &k);
        long long int a[n], b[n];
        for(long long int i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        for(long long int i = 0; i < n; i++){
            scanf("%lld", &b[i]);
            sum += a[i] * b[i];
        }
        for(long long int i = 0; i < n; i++)
        {
            b[i] = max(b[i], -b[i]);
        }
        sum += k*maximum(b, n);
        printf("%lld\n", sum);

    }
    return 0;
}
