#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[3][3];
        for(ll i = 0; i < 3; i++)
        {
            for(ll j = 0; j < 3; j++)
            {
                cin>>a[i][j];
            }
        }
        ll mx = 0;
        for(ll i = 0; i < 3; i++)
        {
            ll sum = 0;
            for(ll j = 0; j < 3; j++)
            {
                sum += a[i][j];
            }
            if(sum > mx)
                mx = sum;
        }
        for(ll i = 0; i < 3; i++)
        {
            ll sum = 0;
            for(ll j = 0; j < 3; j++)
            {
                sum += a[j][i];
            }
            if(sum > mx)
                mx = sum;
        }
        if(mx % 2 == 0 && mx != 0)
            mx--;
        cout<<mx<<"\n";
    }
    return 0;
}
