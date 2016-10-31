#include<iostream>
using namespace std;
int main()
{
    long int n, r;
    cin>>n;
    bool a[111111] = {false};
    for(long int i = 1; i <= n ; i++)
    {
        cin>>r;
        a[r] = true;
    }
    for(long int i = 1; i<= n; i++)
    {
        if(!a[i])
            cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
