#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, d;
        cin>>d>>n;
        long long int ans = n;
        while(d--)
        {
            ans = ans * (ans+1) / 2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
