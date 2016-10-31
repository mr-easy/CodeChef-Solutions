#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        bool found = false;
        string s;
        cin>>s;
        int l = s.length();
        for(int i = 0; i < l - 2; i++)
        {
            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'))
            {
                   printf("Good\n");
                   found = true;
                   break;
            }
        }
        if(!found)
        {
            printf("Bad\n");
        }
    }
    return 0;
}
