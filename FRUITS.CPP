#include<iostream>
using namespace std;
int main()
{
    int n, m, k;
    int minDif;
    int cases;
    cin>>cases;
    while(cases)
    {
        cin>>n>>m>>k;

        if(n == m)
        {
            minDif = 0;
        }
        else if(n > m)
        {
            if(n - m <= k)
                minDif = 0;
            else
                minDif = n - m - k;
        }
        else   //i.e. n < m
        {
            if(m - n <= k)
                minDif = 0;
            else
                minDif = m - n - k;
        }

        cout<<minDif<<"\n";

        cases--;
    }
    return 0;
}
