#include<stdio.h>
using namespace std;
int main()
{
       int long n;
       scanf("%ld", &n);
       int long sum = 0, a;
       for(int i = 0; i < n; i++)
       {
           scanf("%ld", &a);
           sum += a - 1;
       }
       int ans = n;
       if(sum >= n)
        sum -= n;
        else
            sum = 0;
       if(sum % 2 == 0)
            ans += sum/2;
       else
            ans += sum/2 + 1;
       printf("%ld", ans);
}
