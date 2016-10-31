#include<iostream>
using namespace std;
int main()
{
    int cases, n, sum, k;
    cin>>cases;
    for(int t = 1; t <= cases; t++)
    {
        cin>>n>>k;
        sum = n * (n+1) / 2;
        for(int j = k; j <= n; j *= k)
            sum -= j;
        cout<<"Case #"<<t<<": "<<sum<<endl;
    }
    return 0;
}
