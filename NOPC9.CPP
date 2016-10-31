#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int length = s.size();
    char* ans = new char[2*length];
    int cnt;
    for(int i = 0; i < s.size(); i++)
    {
        cnt = 0;
        for(int j = 0; j < s.size(); j++)
        {
            if(s[i] == s[j])
            {
                cnt++;
                if(cnt > 1)
                {
                    //delete s[j] from the string
                    s = s.erase(j ,1);
                    j--;
                }
            }
        }
        ans[2 * i] = s[i];
        ans[2 * i + 1] = '0' + cnt;
    }
    for(int i = 0; i < 2*s.size(); i++)
        cout<<ans[i];
    return 0;
}
