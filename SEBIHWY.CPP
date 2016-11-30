#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll cases;
    scanf("%lld", &cases);
    while(cases--)
    {
        float s, sg, fg, d, t;
        cin>>s>>sg>>fg>>d>>t;
        float f = (d*5)*6*6;//in kmph
        f = f / t;
        f += s;
        //cout<<"father speed : "<<f<<endl;
        float sdiff = abs(f - sg);
        float fdiff = abs(f - fg);
        if(sdiff < fdiff)
            cout<<"SEBI\n";
        else if(sdiff == fdiff)
            cout<<"DRAW\n";
        else
            cout<<"FATHER\n";
    }
    return 0;
}
