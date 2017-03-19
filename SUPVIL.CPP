#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int h = 1, v = 1;
        bool flag = false;
        string ans;
        for(int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            int l = s.size();
            if(s[l-3] == 'm' && s[l-2] == 'a' && s[l-1] == 'n'){
                h++;
            }else{
                v++;
            }
            if(h >= v+2 && !flag){
                ans = "superheroes";
                flag = true;
                v = 0;
            }
            if(v >= h+3 && !flag){
                ans = "villains";
                flag = true;
                h = 0;
            }
        }
        if(!flag)
            cout<<"draw\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}
