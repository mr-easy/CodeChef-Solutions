#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long int cases;
    scanf("%ld", &cases);
    while(cases--)
    {
        long long int h, s;
        cin>>h>>s;
        double d = h*h - 4.0*s;
        if(d < 0) {
            cout<<"-1\n";
        }
        else {
            double a, b;
            a = sqrt(h*h + 4*s) + sqrt(h*h - 4*s);
            a /= 2.0;
            b = sqrt(h*h + 4*s) - sqrt(h*h - 4*s);
            b /= 2.0;
            printf("%lf %lf %lld\n", min(a, b), max(a, b), h);
        }
    }
    return 0;
}
