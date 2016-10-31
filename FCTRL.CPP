#include <bits/stdc++.h>
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
	long long int n, z;
	cases = read_number();
	while(cases--)
	{
		n = read_number();
		z = 0;

		do{
            z += n/5;
            n /= 5;
		}while(n != 0);

		printf("%lld\n", z);

	}
	return 0;
}
