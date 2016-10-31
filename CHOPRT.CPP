#include<iostream>
using namespace std;
int main()
{
    unsigned long int cases, a, b;
    cin>>cases;
    while(cases)
    {
        cin>>a>>b;
        if(a > b)
            cout<<">\n";
        else if(a < b)
            cout<<"<\n";
        else
            cout<<"=\n";

        cases--;
    }

    return 0;
}
