#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int m;
        cin>>m;
        long long int a[m];
        for(long long int i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        long long int ans = 0, current = 0, pos = 0;
        for(current = 0; current < m; current++)
        {
            if(a[current] <= a[pos])
            {
                //current++;
            }
            else
            {
                ans++;
                pos = current;
            }
        }
        cout<<ans<<" ";
    }
    return 0;
}
