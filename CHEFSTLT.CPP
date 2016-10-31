#include<iostream>
#include<string>
using namespace std;
int main()
{
    int cases, ans, cnt, l;
    cin>>cases;
    while(cases--)
    {
        ans = 0;cnt = 0;
        string s1, s2;
        cin>>s1>>s2;
        l = s1.size();
        for(int i = 0; i < l; i++)
        {
            if(s1[i] == '?' || s2[i] == '?')
                cnt++;
            else if(s1[i] != s2[i])
                ans++;
        }
        cout<<ans<<" "<<ans+cnt<<"\n";
    }
    return 0;
}
