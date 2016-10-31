#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        string s;
        cin>>s;
        int l = s.length();
        int chefWin = 0, chefLose = 0;
        for(int i = 0; i < l; i++)
        {
            if(s[i] == '1')
                chefWin++;
            else
                chefLose++;
        }
        if(chefWin > chefLose)
            printf("WIN\n");
        else
            printf("LOSE\n");
    }
    return 0;
}
