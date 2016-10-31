#include<iostream>
using namespace std;
int main()
{
    unsigned long int cases, b;
    cin>>cases;
    while(cases)
    {
        cin>>b;
        b = (b/2) - 1;
        b = b*(b+1)/2;
        cout<<b<<"\n";
        cases--;
    }
    return 0;
}
