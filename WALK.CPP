#include<stdio.h>
int main()
{
    long int cases;
    scanf("%ld", &cases);
    while(cases--)
    {
        long int n;
        scanf("%ld", &n);
        long long int a[n];
        long long int mx = -1;
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            if(a[i] + i >= mx)
                mx = a[i] + i;
        }
        printf("%lld\n", mx);
    }
    return 0;
}
