#include<iostream>
using namespace std;
int GCD(int x, int y)
{
    while(x != y)
    {
        if(x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}
int main()
{
    int n, gcd, cases;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        int* a = new int[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        gcd = a[0];
        for(int i = 1; i < n; i++)
        {
            gcd = GCD(gcd, a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            a[i] /= gcd;
            cout<<a[i]<<" ";
        }
        cout<<"\n";

        cases--;
    }
    return 0;
}
