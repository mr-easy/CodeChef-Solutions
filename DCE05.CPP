#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long int n, cases, ans;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        ans = (int) (log(n) / log(2));
        ans = pow(2, ans);
        cout<<ans<<"\n";

        cases--;
    }
    return 0;
}
