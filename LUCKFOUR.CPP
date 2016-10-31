#include<iostream>
using namespace std;
int main()
{
    unsigned long int n, cases;
    int fours;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        fours = 0;
        while(n != 0)
        {
            if(n%10 == 4)
                fours++;

            n = n/10;
        }
        cout<<fours<<"\n";
        cases--;
    }
    return 0;
}
