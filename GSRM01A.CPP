#include<iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        long long int n, k;
        cin>>n>>k;
        long long int a;
        long long int sum = 0;
        bool f = false;
        for(long long int i = 0; i < n; i++)
        {
            cin>>a;
            sum += a;
            if(sum >= k)
                f = true;
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
