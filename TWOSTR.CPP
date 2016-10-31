#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int cases;
    cin>>cases;
    while(cases--)
    {
        string x, y;
        bool possible = true;
        cin>>x;
        cin>>y;
        int l = x.size();
        for(int i = 0; i < l; i++)
        {
            if(x[i] == '?' || y[i] == '?')
                continue;
            if(x[i] != y[i])
            {
                possible = false;
                break;
            }
        }
        if(possible)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
