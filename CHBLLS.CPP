#include<iostream>
using namespace std;
int main()
{
    int result;
    cout<<1<<"\n";
    cout<<4<<" "<<1<<" "<<1<<" "<<2<<" "<<3<<"\n";
    cout<<4<<" "<<3<<" "<<4<<" "<<5<<" "<<5<<"\n";
    cin>>result;
    switch(result)
    {
        case 2:cout<<2<<"\n"<<1<<"\n";
        break;
        case 1:cout<<2<<"\n"<<2<<"\n";
        break;
        case 0:cout<<2<<"\n"<<3<<"\n";
        break;
        case -1:cout<<2<<"\n"<<4<<"\n";
        break;
        case -2:cout<<2<<"\n"<<5<<"\n";
        break;
    }
    return 0;
}
