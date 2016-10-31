#include<iostream>
using namespace std;
int main()
{
    unsigned long int n, rev, m;
    int cases;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        rev = 0;
        m = n;
        while(m > 0)
        {
            rev = rev * 10 + m % 10;
            m = m / 10;
        }
        if(rev == n)
            cout<<"wins\n";
        else
            cout<<"losses\n";
        cases--;
    }
    return 0;
}
