#include<iostream>
#include<string>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int zeroes = 0, ones = 0;
        string s;
        cin>>s;
        int l = s.size();
        for(int i = 0; i < l; i++)
        {
            if(s[i] == '0')
                zeroes++;
            else
                ones++;
        }
        if(ones == 1 || zeroes == 1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
