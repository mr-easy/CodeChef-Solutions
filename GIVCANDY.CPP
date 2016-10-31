#include<stdio.h>
long long int gcd(long long int a, long long int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

long long int lcm(long long int a, long long int b)
{
    long long int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
long long int minimumOf(long long int a, long long int b)
{
    if(b > a)
        return a;
    return b;
}
int main()
{
    long int cases;
    long long int A, B, C, D, diff, ans;
    scanf("%ld", &cases);
    while(cases--)
    {
        scanf("%lld", &A);
        scanf("%lld", &B);
        scanf("%lld", &C);
        scanf("%lld", &D);

        if(A > B)
            diff = A - B;
        else
            diff = B - A;
        ans = minimumOf((diff%gcd(C, D)), (gcd(C, D) - (diff%gcd(C, D))));
        printf("%lld\n", ans);

    }
    return 0;
}
