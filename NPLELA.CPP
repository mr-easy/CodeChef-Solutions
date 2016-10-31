#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(long long int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            cout<<"Angry";
            return 0;
        }
    }
    cout<<"Happy";
    return 0;
}
