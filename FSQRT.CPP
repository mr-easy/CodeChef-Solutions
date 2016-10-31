#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int cases;
    unsigned long int n, sqrt;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        sqrt =(int) pow(n, 0.5);
        cout<<sqrt<<"\n";
        cases--;
    }
    return 0;
}
