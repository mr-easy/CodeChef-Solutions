#include<iostream>
using namespace std;
long int GCD(long int a, long int b)
{
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int main()
{
    long int x, y, gcd, ans;
    int cases;
    cin>>cases;
    while(cases)
    {
        cin>>x>>y;
        gcd = GCD(x, y);
        ans = (x * y) / (gcd * gcd);
        cout<<ans<<"\n";

        cases--;
    }
    return 0;
}
