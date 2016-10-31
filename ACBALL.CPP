#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1;
        cin>>s2;
        long int l = s1.size();
        for(long int i = 0; i < l; i++)
        {
            if(s1[i] != s2[i])
                s2[i] = 'B';
            else if(s1[i] == 'W')
                s2[i] = 'B';
            else
                s2[i] = 'W';
        }
        cout<<s2<<"\n";
    }
    return 0;
}
