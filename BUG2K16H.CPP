#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[26];
    int cases;
    cin>>cases;
    while(cases--)
    {
        for(int i = 0; i < 26; i++)
            a[i] = 0;
        string s;
        cin>>s;
        int l = s.size();
        for(int i = 0; i < l; i++)
        {
            a[s[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(a[i] == 1)
                cout<<(char)(i + 97);
            else if(a[i] > 1)
                cout<<(char)(i + 97)<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
