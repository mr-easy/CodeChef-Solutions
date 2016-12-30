#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int m = n/8;
        int j = n%8;
        int k;
        string s;
        switch(j)
        {
        case 0:
            k = n-1;
            m = 0;
            s = "SL";
            break;
        case 1:
            k = 4;
            s = "LB";
            break;
        case 2:
            k = 5;
            s = "MB";
            break;
        case 3:
            k = 6;
            s = "UB";
            break;
        case 4:
            k = 1;
            s = "LB";
            break;
        case 5:
            k = 2;
            s = "MB";
            break;
        case 6:
            k = 3;
            s = "UB";
            break;
        case 7:
            k = 8;
            s = "SU";
            break;
        }
        cout<<k+m*8<<s<<"\n";
    }
    return 0;
}
