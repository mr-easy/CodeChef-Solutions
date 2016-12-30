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
        int j = -10;
        bool flag = true;
        for(int i = 0; i < l; i++)
        {
            if(s[i] == '*')
            {
                j = i;
            }else{
                if(i-j > 2){
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
