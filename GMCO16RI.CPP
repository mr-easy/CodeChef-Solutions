#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        string s;
        cin>>s;
        cout<<"Case #"<<i<<": ";
        switch(s[s.size()-1])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout<<s<<" is ruled by a queen.\n";
            break;
        case 'Y':
        case 'y':
            cout<<s<<" is ruled by nobody.\n";
            break;
        default:
            cout<<s<<" is ruled by a king.\n";
            break;
        }
    }
    return 0;
}
