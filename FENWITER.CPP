#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2, s3;
        long long int n, l1, l2, l3;
        long long int ans = 1;
        cin>>s1>>s2>>s3>>n;
        l1 = s1.size();
        l2 = s2.size();
        l3 = s3.size();
        bool zeroFound = false;
        for(long long int i = l3-1; i >= 0; i--)
        {
            if(s3[i] == '0')
                zeroFound = true;
            else
            {
                if(zeroFound)
                {
                    ans++;
                }
            }
        }

        long long int ones = 0;
        for(long long int i = l2-1; i >= 0; i--)
        {
            if(s2[i] == '0')
                zeroFound = true;
            else
            {
                if(zeroFound)
                {
                    ans++;
                }
                ones++;
            }
        }
        if(zeroFound)
            ans += (ones * (n-1));

        for(long long int i = l1-1; i >= 0; i--)
        {
            if(s1[i] == '0')
                zeroFound = true;
            else
            {
                if(zeroFound)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
