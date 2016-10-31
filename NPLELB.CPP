#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n, x;
    cin>>n>>x;
    ll strikerScore = 0, unstrikerScore = 0;
    ll totalScore = 0;
    int y;
    ll striker = 1, unstriker = 2;
    for(ll i = 1; i <= n; i++)
    {
       cin>>y;
       if(y == -1)
       {
           cout<<strikerScore<<" "<<totalScore<<"\n";
           strikerScore = 0;
           if(striker > unstriker)
                striker++;
           else
                striker += 2;
       }
       else
       {
           strikerScore += y;
           totalScore += y;
           if(y%2 != 0)
           {
               ll temp = strikerScore;
               strikerScore = unstrikerScore;
               unstrikerScore = temp;
               temp = striker;
               striker = unstriker;
               unstriker = temp;
           }
       }
       if(i >= x && i%x == 0)
       {
           ll temp = strikerScore;
           strikerScore = unstrikerScore;
           unstrikerScore = temp;
           temp = striker;
           striker = unstriker;
           unstriker = temp;
       }
    }
    cout<<totalScore<<"\n";
    return 0;
}
