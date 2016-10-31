#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    long int cases;
    cin>>s;
    scanf("%ld", &cases);
    while(cases--)
    {
        long long int a, b;
        scanf("%lld%lld", &a, &b);
        a = a % s.length();
        b = b % s.length();
        if(a == 0) a = s.length();
        if(b == 0) b = s.length();
        if(s[a - 1] == s[b - 1])
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
