#include<iostream>
using namespace std;
int main()
{
    string s;
    bool found;
    int n, l;
    cin>>s>>n;
    int sl = s.size();
    bool have[26] = {false};
    for(int i = 0; i < sl; i++)
    {
        have[s[i] - 97] = true;
    }
    for(int t = 0; t < n; t++)
    {
        string a;
        cin>>a;
        l = a.size();
        int i;
        for(i = 0; i < l; i++)
        {
            if(!have[a[i] - 97])
                break;
        }

        if(i != l)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
