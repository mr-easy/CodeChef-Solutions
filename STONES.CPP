#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string J;
    string S;
    int jl, sl, cases, jewels;
    cin>>cases;
    while(cases)
    {
        cin>>J;
        cin>>S;
        jewels = 0;
        jl = J.size();
        sl = S.size();

        for(int i = 0; i < sl; i++)
        {
            for(int j = 0; j < jl; j++)
            {
                if(S[i] == J[j])
                {
                    jewels++;
                    break;
                }
            }
        }
        cout<<jewels<<"\n";

        cases--;
    }
    return 0;
}
