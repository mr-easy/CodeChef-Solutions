#include<iostream>
#include<set>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        set<int> party;
        int n, d;
        cin>>n;
        while(n--)
        {
            cin>>d;
            party.insert(d);
        }
        cout<<party.size()<<"\n";
    }
    return 0;
}
