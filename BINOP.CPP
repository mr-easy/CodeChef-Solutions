#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
long int maximum(long int a, long int b)
{
    if(a >= b)
        return a;
    else
        return b;
}
int main()
{
    long int cases;
    scanf("%ld", &cases);
    while(cases--)
    {
        string a,b;
        cin>>a>>b;
        bool ahas0 = false, ahas1 = false;
        bool bhas0 = false, bhas1 = false;
        long int changeTo1 = 0, changeTo0 = 0;
        for(long int i = 0; i < a.length(); i++)
        {
            if(!ahas0 && a[i] == '0')
            {
                ahas0 = true;
            }
            if(!ahas1 && a[i] == '1')
            {
                ahas1 = true;
            }
            if(!bhas0 && b[i] == '0')
            {
                bhas0 = true;
            }
            if(!bhas1 && b[i] == '1')
            {
                bhas1 = true;
            }
            if(a[i] == '1' && b[i] =='0')
            {
                changeTo0++;
            }
            else if(a[i] == '0' && b[i] == '1')
            {
                changeTo1++;
            }
        }

        if(!ahas0 && bhas0)
        {
            printf("Unlucky Chef\n");
        }
        else if(!ahas1 && bhas1)
        {
            printf("Unlucky Chef\n");
        }
        else
        {
            printf("Lucky Chef\n");
            printf("%ld\n", maximum(changeTo0, changeTo1));
        }
    }
    return 0;
}
