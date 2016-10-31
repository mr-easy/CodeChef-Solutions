#include<iostream>
using namespace std;
int main()
{
    int cases;
    unsigned long int a, b;
    cin>>cases;
    while(cases)
    {
        cin>>a>>b;
        if(a > b)
            cout<<a;
        else
            cout<<b;
        cout<<" "<<(a+b)<<"\n";

        cases--;
    }
    return 0;
}
