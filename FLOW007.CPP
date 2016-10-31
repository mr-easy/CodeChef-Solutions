#include<iostream>
using namespace std;
int main()
{
    long int n, rev;
    int cases;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        rev = 0;
        while(n > 0)
        {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        cout<<rev<<"\n";
        cases--;
    }
    return 0;
}
