#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int cases;
    long long int n, r, g, b, maximum;
    scanf("%lld", &cases);
    while(cases--)
    {
        r = 0;
        g = 0;
        b = 0;
        scanf("%lld", &n);
        string colors;
        cin>>colors;
        for(long long int i = 0; i < n; i++)
        {
            switch(colors[i])
            {
                case 'R':r++;
                break;
                case 'G':g++;
                break;
                case 'B':b++;
                break;
            }
        }
        if(r > g)
        {
            if(r > b)
                maximum = r;
            else
                maximum = b;
        }
        else
        {
            if(g > b)
                maximum = g;
            else
                maximum = b;
        }
        printf("%lld\n", (n - maximum));
    }
    return 0;
}
