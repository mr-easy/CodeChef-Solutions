#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int sum = 0;
        bool possible = true;
        long int n;
        cin>>n;
        long int a[n];
        for(long int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(long int i = 0; i < n ;i++)
        {
            int s = 0;
            for(long int j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    s++;
                    sum++;
                }
            }
            if(s > 2)
            {
                possible = false;
                break;
            }
        }
        if(possible)
            cout<<sum<<endl;
        else
            cout<<"Not Possible\n";
    }
    return 0;
}
