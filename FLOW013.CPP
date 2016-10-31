#include<iostream>
using namespace std;
int main()
{
    unsigned int a, b, c, cases;
    bool valid;
    cin>>cases;
    while(cases)
    {
        cin>>a>>b>>c;
        if(a>180 || b>180 || c>180)
        {
            valid = false;
        }
        else if(a + b + c == 180)
        {
            valid = true;
        }
        else
        {
            valid = false;
        }
        if(valid)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        cases--;
    }
    return 0;
}
