//FriendsChallenge
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
unsigned long long int read() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  unsigned long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int cases, n;
    unsigned long long int s;
    //scanf("%lld", &cases);
    cases = read_number();
    while(cases--)
    {
        bool pos = false;
        //scanf("%lld", &n);
        n = read_number();
        long long int a[n];
        unsigned long long int sum = 0;
        for(long long int i = 0; i < n; i++)
        {
            //scanf("%lld", &a[i]);
            a[i] = read_number();
            sum += a[i];
        }
        //scanf("%llu", &s);
        s = read();
        unsigned long long int k = 0;
        long long int cnt;
        if(sum < s)
        {
            printf("BING\n");
            continue;
        }

        else if(sum == s)
        {
            for(long long int z = 0; z < n; z++)
            {
                if(z%2 == 0)
                    printf("%lld ", z - (z/2)+ 1);
                else
                    printf("%lld ", n-((z+1)/2)+1);
            }
            printf("\n");
            continue;
        }
        for(cnt = 0; cnt < n; cnt++)
        {
            if(cnt%2 == 0)
                k += a[cnt - (cnt/2)];
            else
                k += a[n-((cnt+1)/2)];

            if(k == s)
            {
                pos = true;
                break;
            }
            else if(k > s)
            {
                pos = false;
                break;
            }
        }
        if(cnt == n && k != s)
        {
            printf("BING\n");
            continue;
        }
        if(pos)
        {
            for(long long int z = 0; z <= cnt; z++)
            {
                if(z%2 == 0)
                    printf("%lld ", z - (z/2)+ 1);
                else
                    printf("%lld ", n-((z+1)/2)+1);
            }
            printf("\n");
        }
        else
        {
            printf("BING\n");
        }
    }
    return 0;
}
