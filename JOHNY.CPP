#include<stdio.h>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n, k;
        scanf("%d", &n);
        long long int a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        scanf("%d", &k);
        k--;
        long long int theItem = a[k];
        int ans = 1;

        for(int j = 0; j < n; j++){
            if(a[j] < theItem){
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
