#include<stdio.h>
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
    unsigned long int n;
    unsigned long long int w, l, sum;
    unsigned long int m = 0; // m = months
    unsigned long int* h;
    unsigned long int* r;
    unsigned long int* nh;  // nh = new height
    //scanf("%lu%llu%llu", &n, &w, &l);
    n = read_number();
    w = read_number();
    l = read_number();
    h = new unsigned long int[n];
    r = new unsigned long int[n];
    nh = new unsigned long int[n];
    for(unsigned long int i = 0; i < n; i++)
    {
        //scanf("%lu%lu", &h[i], &r[i]);
        h[i] = read_number();
        r[i] = read_number();
    }
    while(true)
    {
        sum = 0;
        for(unsigned long int i = 0; i < n; i++)
        {
            nh[i] = h[i] + r[i] * m;
            if(nh[i] >= l)
                sum += nh[i];
            if(sum >= w)
            {
                printf("%lu\n", m);
                return 0;
            }
        }
        if(sum >= w)
        {
            printf("%lu\n", m);
            break;
        }
        m++;
    }
    return 0;
}
