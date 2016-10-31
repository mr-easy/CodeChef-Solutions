#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        string s;
        int n;
        scanf("%d", &n);
        cin>>s;

        int ans = 0;
        int i = 0;
        if(n > 1){
            if(s[1] == '0' && s[0] == '0')
                ans++;
            for(i = 1; i < n - 1; i++)
            {
                if(s[i] == '1')
                    continue;
                if(s[i + 1] == '1' || s[i - 1] == '1')
                    continue;
                ans++;
            }

            if(s[n-1] == '0' && s[n-2] == '0')
                ans++;
        }else{
            if(s[0] == '0')
                ans = 1;
            else
                ans = 0;
        }
        printf("%d\n", ans);
    }
    return 0;
}
