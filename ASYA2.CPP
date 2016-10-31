#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n1, n2, l;
    scanf("%ld%ld", &n1, &n2);
    bool ss1[10001][26] = {false};
    bool ss2[10001][26] = {false};
    string s;
    for(long int i = 0; i < n1; i++)
    {
        cin>>s;
        l = s.size();
        for(long int j = 0; j < l; j++)
            ss1[i][s[j]-'A'] = true;
    }
    for(long int i = 0; i < n2; i++)
    {
        cin>>s;
        l = s.size();
        for(long int j = 0; j < l; j++)
            ss2[i][s[j]-'A'] = true;
    }

    long int ans = 0;
    bool flag;
    for(long int i = 0; i < n1; i++)
    {
        for(long int j = 0; j < n2; j++)
        {
            flag = true;
            for(int k = 0; k < 26; k++)
            {
                if(!ss1[i][k] && !ss2[j][k])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans++;
        }
    }
    printf("%ld\n", ans);
    return 0;
}
