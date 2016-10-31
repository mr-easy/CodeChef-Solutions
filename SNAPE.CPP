#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int cases;
    float l, b, rmax, rmin;
    cin>>cases;
    while(cases)
    {
        cin>>b>>l;
        rmin = l * sin(acos(b/l));
        rmax = l/(sin(atan(l/b)));
        cout<<rmin<<" "<<rmax<<"\n";
        cases--;
    }
    return 0;
}
