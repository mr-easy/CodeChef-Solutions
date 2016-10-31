#include<iostream>
using namespace std;
int main()
{
    unsigned long int cases;
    unsigned long long int n;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        if(n % 2 == 0)
            cout<<n<<"\n";
        else
            cout<<n-1<<"\n";
        cases--;
    }
    return 0;
}
