#include<bits/stdc++.h>
#define gc getchar_unlocked
#define BIG 1111111
using namespace std;
long int ptr[BIG], cases, n, l, a[BIG], indegree[BIG];

long int read_number() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    //scanf("%ld", &cases);
    cases = read_number();
    while(cases--)
    {
        //scanf("%lld",  &n);
        n = read_number();

        for(long int i = 0; i < BIG; i++)
        {
            ptr[i] = -1;
            indegree[i] = 0;
        }

        for(long int i = 0; i < n; i++)
        {
            //scanf("%ld", &a[i]);
            a[i] = read_number();
            long int calc = (((i + a[i]) % n) + 1) % n;
            ptr[i] = calc;
            indegree[calc]++;
        }
        long long int ans = n;
        bool changed = true;
        //removing nodes with in degree = 0;
        while(changed)
        {
            changed = false;
            for(long int i = 0; i < n; i++)
            {
                if(indegree[i] == 0)
                {
                    changed = true;
                    indegree[i]--;
                    indegree[ptr[i]]--;
                    ans--;
                    l = ptr[i];
                    while(indegree[l] == 0)
                    {
                        indegree[l]--;
                        indegree[ptr[l]]--;
                        ans--;
                        l = ptr[l];
                    }
                }
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
