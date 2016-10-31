#include<stdio.h>
int main()
{
    long long int n, q, t, mx = -1, mn = 1000000001;
    scanf("%lld%lld", &n, &q);
    long long int* a = new long long int[n];
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        if(a[i] < mn)
            mn = a[i];
        if(a[i] > mx)
            mx = a[i];
    }
    while(q--)
    {
        scanf("%lld", &t);
        if(t <= mx && t >= mn)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
