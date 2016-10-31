#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        long long int s, v;
        cin>>s>>v;
        double ans = (2*(double)s)/(3*(double)v);
        printf("%.6f\n", ans);
    }
    return 0;
}
