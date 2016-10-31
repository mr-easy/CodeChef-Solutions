#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int cases, n, x;
    scanf("%d", &cases);
    while(cases--)
    {
        scanf("%d%d", &n, &x);
        int a[n];
        int mn = 1001;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(mn >= a[i])
                mn = a[i];
            sum += a[i];
        }
        if(sum % x == 0)
        {
            printf("%d\n", (sum / x));
        }
        else
        {
            int a = (int) sum / x;
            if((sum - mn) >= a*x)
                printf("-1\n");
            else
                printf("%d\n", a);
        }
    }
    return 0;
}
