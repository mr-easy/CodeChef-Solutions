#include<iostream>
using namespace std;
int main()
{
    int n, i, cases;
    long long int fact;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        fact = 1;
        for(i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout<<fact<<"\n";

        cases--;
    }
    return 0;
}
