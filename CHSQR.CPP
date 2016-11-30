#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int z = (n+1)/2;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cout<<z<<" ";
                if(j != n)
                {
                    z = (z - 1);
                    if(z == 0)
                        z = n;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}
