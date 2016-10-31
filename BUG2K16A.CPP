#include<iostream>
using namespace std;
int main()
{
    int cases, n;
    cin>>cases;
    for(int t = 1; t <= cases; t++)
    {
        cin>>n;
        int i = 1, leap = 1;
        while(i < n)
        {
            i += (9*leap) + 1;
            leap++;
        }
        cout<<"Case #"<<t<<": "<<leap<<endl;
    }
    return 0;
}
