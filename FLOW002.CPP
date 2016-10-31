#include<iostream>
using namespace std;
int main()
{
    int cases;
    long int a, b;
    cin>>cases;
    while(cases)
    {
        cin>>a>>b;
        cout<<(a%b)<<"\n";
        cases--;
    }
    return 0;
}
