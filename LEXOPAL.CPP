#include<iostream>
#include<string>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        bool possible = true;
        string s;
        cin>>s;
        int l = s.size();
        char a[l];
        for(int i = 0; i < l; i++)
        {
            //reversing the string
            a[i] = s[l-i-1];
        }
        for(int i = 0; i < l; i++)
        {
            if(a[i] == '.' && s[i] == '.')
            {
                a[i] = 'a';
            }
            else if (a[i] == '.')
            {
                a[i] = s[i];
            }
            else if(s[i] == '.')
            {
                //do nothing
            }
            else if(s[i] != a[i])
            {
                possible = false;
                break;
            }
        }
        if(possible)
        {
            for(int i = 0; i < l; i++)
                cout<<a[i];
            cout<<"\n";
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
