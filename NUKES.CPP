#include<stdio.h>
using namespace std;
int main()
{

    int n, k;
    long long int a;
    scanf("%lld%d%d", &a, &n, &k);
    n++;
    for(int i = 0; i < k; i++)
    {
        int ans = a % n;
        a = a / n;
        printf("%d ", ans);
    }
    printf("\n");

    return 0;
}
