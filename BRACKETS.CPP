#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long int l = s.size();
        long int maxBalance = 0, balance = 0;
        for(long int i = 0; i < l; i++)
        {
            if(s[i] == '(')
                balance++;
            else
                balance--;
            maxBalance = max(maxBalance, balance);
        }
        for(long int i = 0; i < maxBalance; i++)
            cout<<"(";
        for(long int i = 0; i < maxBalance; i++)
            cout<<")";
        cout<<"\n";
    }
    return 0;
}
