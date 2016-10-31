#include<iostream>
using namespace std;
int main()
{
    long long int w, x, y, z;
    cin>>w>>x>>y>>z;
    if(w >= x+y+z)
        cout<<"Happy";
    else
        cout<<"Sad";
    return 0;
}
