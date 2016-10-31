#include<iostream>
using namespace std;
int main()
{
    int cases, sum;
    unsigned long int n;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        sum = 0;
        while(n != 0)
        {
            sum += n%10;
            n /= 10;
        }
        cout<<sum<<"\n";
        cases--;
    }
}
