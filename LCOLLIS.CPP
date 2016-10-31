#include<stdio.h>
#include<iostream>
using namespace std;
long int nChoosek(int n, int k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    long int result = n;
    for(int i = 2; i <= k; ++i) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n, m;
        long int ans = 0;
        scanf("%d%d", &n, &m);
        string a[n];
        int sum[m];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i < m; i++)
        {
            sum[i] = 0;
            for(int j = 0; j < n; j++){
                if(a[j][i] == '1')
                    sum[i]++;
            }
            if(sum[i] > 1)
                ans += sum[i] * ((sum[i]) - 1) / 2;
        }
        printf("%ld\n", ans);
    }
    return 0;
}
