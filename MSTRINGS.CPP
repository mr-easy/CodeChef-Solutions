#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l = s.size();
        bool flag = true;
        for(int i = 0; i <= l/2; i++)
        {
            if(s[i] != s[l-i-1])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
