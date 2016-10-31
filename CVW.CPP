//Civil War
#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;
long long int read_number() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int cases, n, k;
    //scanf("%lld", &cases);
    cases = read_number();
    while(cases--)
    {
        //scanf("%lld%lld", &n, &k);
        n = read_number();
        k = read_number();
        if(n%2 == 1)
        {
            if(k > 0)
                printf("CAPTAIN AMERICA EVADES\n");
            else{
                for(long long int i = 1; i <= n; i++)
                    printf("%lld ", i);
                printf("\n");
            }

        }
        else
        {
            if(k == 0)
            {
                for(long long int i = 1; i <= n; i++)
                    printf("%lld ", i);
                printf("\n");
            }
            else if (n%(2*k) == 0)
            {
                if(k == 1)
                {
                    for(long long int i = 1; i <= n; i++)
                    {
                        if(i%2 == 0)
                        {
                            printf("%lld ", i-1);
                        }
                        else
                        {
                            printf("%lld ", i+1);
                        }
                    }
                }
                else{
                    long long int l = 0;
                    for(long long int i = 1; i <= n; i++)
                    {
                        if(i%k == 1)
                        {
                            l++;
                        }
                        if(l%2 == 0)
                        {
                            printf("%lld ", i-k);
                        }
                        else
                        {
                            printf("%lld ", i+k);
                        }
                    }
                }
                printf("\n");
            }
            else
            {
                printf("CAPTAIN AMERICA EVADES\n");
            }
        }
    }
    return 0;
}
