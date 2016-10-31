//Logging in the computer
#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;
int read_number() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int cases, p, q, r;
    //scanf("%lld", &cases);
    cases = read_number();
    while(cases--)
    {
        string s;
        cin>>s;
        long long int l = s.size();
        //scanf("%lld%lld", &p, &q);
        p = read_number();
        q = read_number();
        long long int a[26] = {0};
        for(long long int i = 0; i < l; i++)
        {
            a[s[i] - 'a']++;
        }
        a[0] *= p;
        for(long long int i = 1; i < 26; i++)
        {
            a[i] *= p;
            a[i] += a[i-1];
        }
        p *= l;
        while(q--)
        {
            //scanf("%lld", &r);
            r = read_number();
            if(r < 1 || r > p)
                printf("-1\n");
            else
            {
                for(long long int i = 0; i < 26; i++)
                {
                    if(r <= a[i])
                    {
                        printf("%c\n", i+'a');
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
