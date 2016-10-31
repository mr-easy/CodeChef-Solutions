#include<iostream>
using namespace std;
int main()
{
    int cases;
    unsigned long int n, ans;
    cin>>cases;
    while(cases>0)
    {
        cin>>n;
        if(n % 2 == 0)
            ans = (n/2) + 1;
        else
        {
            ans = (int) n/2;
            ans++;
        }
        cout<<ans<<"\n";
        cases--;
    }
    return 0;
}
