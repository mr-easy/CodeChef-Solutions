#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        string s;
        long int n;
        scanf("%ld", &n);
        cin>>s;
        long int z;
        for(z =0; z < n; z++)
        {
            if(s[z] != s[n-z-1])
            {
                z = -1;
                break;
            }
        }
        if(z != -1)
        {
            printf("0\n");
            continue;
        }
        printf("1\n");
    }
    return 0;
}
