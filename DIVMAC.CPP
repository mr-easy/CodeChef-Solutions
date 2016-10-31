#include<stdio.h>
#include<algorithm>
#include <bits/stdc++.h>
#define gc getchar_unlocked
#define number 1000001
using namespace std;
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
    bool notPrime[number] = {false};
    notPrime[2] = false;
    //saving all prime numbers - Sieve's method
    for(long int i = 2; i < number; i++)
    {
        if(!notPrime[i])
        {
            for(long int j = 2*i; j < number; j += i)
            {
                notPrime[j] = true;
            }
        }
    }
    long int primes[78499];
    long int cnt = 0;
    for(long int i = 2; i < number; i++)
    {
        if(!notPrime[i])
        {
            primes[cnt] = i;
            cnt++;
        }
    }


    int cases;
    //scanf("%d", &cases);
    cases = read_number();
    while(cases--)
    {
        long int n, m;
        bool allPrime = true;
        //scanf("%ld%ld", &n, &m);
        n = read_number();
        m = read_number();
        long int a[n], lpd[n];
        for(long int i = 0; i < n; i++)
        {
            //scanf("%ld", &a[i]);
            a[i] = read_number();
            //calculate lpd[i]
            if(a[i] == 1)
            {
                lpd[i] = 1;
                continue;
            }
            if(!notPrime[a[i]])
            {
                //if the number is prime
                lpd[i] = a[i];
                continue;
            }
            allPrime = false;
            for(long int k = 0; k < 78499; k++)
            {
                if(a[i] % primes[k] == 0)
                {
                    lpd[i] = primes[k];
                    break;
                }
            }
        }

        long int q, l, r;
        while(m--)//for each query
        {
            //scanf("%ld%ld%ld", &q, &l, &r);
            q = read_number();
            l = read_number();
            r = read_number();
            l--;
            r--;//1-based to 0-based indexing
            if(!allPrime)
            {
                if(q == 0)
                {
                    //update
                    for(long int i = l; i <= r; i++)
                    {
                        //update a[i]
                        a[i] = a[i] / lpd[i];
                        //update lpd[i]
                        if(a[i] == 1)
                        {
                            lpd[i] = 1;
                            continue;
                        }
                        if(!notPrime[a[i]])
                        {
                            //if the number is prime
                            lpd[i] = a[i];
                            continue;
                        }
                        for(long int k = 0; k < 78499; k++)
                        {
                            if(a[i] % primes[k] == 0)
                            {
                                lpd[i] = primes[k];
                                break;
                            }
                        }
                    }
                }
                else
                {
                    //'Get' query
                    long int result = 1;
                    for(long int i = l; i <= r; i++)
                    {
                        if(result < lpd[i])
                            result = lpd[i];
                    }
                    printf("%ld ", result);
                }
            }
            else
            {
                //all numbers are prime
                if(q == 0)
                {//update
                    for(long int i = l; i <= r; i++)
                    {
                        a[i] = 1;
                    }
                }
                else
                {//get
                    long int result = 1;
                    for(long int i = l; i <= r; i++)
                    {
                        if(result < a[i])
                            result = a[i];
                    }
                    printf("%ld ", result);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
