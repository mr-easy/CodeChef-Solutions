#include<iostream>
#define ll unsigned long long int
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        string a, b;
        cin>>a;
        cin>>b;
        ll l = a.size(), a1 = 0, b1 = 0;
        for(ll i = 0; i < l; i++)
        {
            a1 += a[i] - '0';
        }
        l = b.size();
        for(ll i = 0; i < l; i++)
        {
            b1 += b[i] - '0';
        }
        cout<<(a1*b1)%9<<"\n";
    }
    return 0;
}
