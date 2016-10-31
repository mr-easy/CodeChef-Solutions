#include<stdio.h>
using namespace std;
int main()
{
    long long int n;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        scanf("%lld", &n);
        long long int t[n];
        bool alone[100001] = {false};
        for(long long int i = 0; i < n; i++)
        {
            scanf("%lld", &t[i]);
            if(alone[t[i]])
                alone[t[i]] = false;
            else
                alone[t[i]] = true;
        }
        for(long long int i = 1; i < 100001; i++)
        {
            if(alone[t[i]]){
                printf("%lld\n", t[i]);
                break;
            }

        }
    }
    return 0;
}
