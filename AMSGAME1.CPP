#include<stdio.h>
using namespace std;


long long int gcd(long long int a, long long int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n;
        scanf("%d", &n);
        long long int num;
        long long int res = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &num);
            res = gcd(num, res);
        }
        printf("%d\n", res);
    }
    return 0;
}
