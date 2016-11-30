#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        long long int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum % 2 == 0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
