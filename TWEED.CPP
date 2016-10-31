#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int cases;
    string str;
    scanf("%d", &cases);
    while(cases--)
    {
        int n;
        cin>>n>>str;
        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        if(n == 1
           && a[0]%2 == 0
           && str[2] == 'e')
            printf("Dee\n");
        else
            printf("Dum\n");

    }
    return 0;
}
