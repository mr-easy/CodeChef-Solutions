//ICPC Pre-Prelims Practice Round
#include<stdio.h>
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
    long long int cases;
    long long int n, e, s, x, y;
    //scanf("%lld", &cases);
    cases = read_number();
    while(cases--)
    {
        bool possible = true;
        //scanf("%lld%lld", &s, &e);
        s = read_number();
        e = read_number();
        //scanf("%lld", &n);
        n = read_number();
        while(n--)
        {
            //scanf("%lld%lld", &x, &y);
            x = read_number();
            y = read_number();
            if(x > s && x < e)
                possible = false;
            if(y > s && y < s)
                possible = false;
        }
        if(possible)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
