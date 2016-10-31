#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int minimum(int a, int b)
{
    if(a < b)
        return a;
    return b;
}
int main()
{
    long int cases;
    scanf("%ld", &cases);
    while(cases--)
    {
        string s;
        cin>>s;
        long long int l = s.length();
        long int sum = 0;
            for(long long int i = 0; i < l; i++)
            {
                sum += s[i] - '0';
            }

        if(l > 1 && sum < 9){
            printf("%d\n", 9-(sum%9));
        }
        else
        {

            int ans = minimum(sum%9, 9-(sum%9));
            printf("%d\n", ans);
        }
    }
    return 0;
}
