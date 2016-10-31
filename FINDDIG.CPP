#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, ans = 0;
        cin>>n;
        long long int k = n;
        while(k > 0)
        {
            int digit = k%10;
            if(digit != 0)
                if(n%digit == 0)
                    ans++;
            k /= 10;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
