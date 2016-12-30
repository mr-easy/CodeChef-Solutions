#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n], sum, prod, ans = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++)
        {
            sum = 0;
            prod = 1;
            for(int j = i; j >= 0; j--)
            {
                sum += a[j];
                prod *= a[j];
                if(sum == prod)
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
