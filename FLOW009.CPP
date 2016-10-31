#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    unsigned long int quantity, price;
    double expense;
    int cases;
    cin>>cases;
    while(cases)
    {
        cin>>quantity>>price;
        if(quantity <= 1000)
        {
            expense = price * quantity;
        }
        else
        {
            expense = 0.9 * (price * quantity);
        }
        cout<<setiosflags(ios::fixed)
            <<setiosflags(ios::showpoint)
            <<setprecision(6)
            <<expense<<"\n";
        cases--;
    }
    return 0;
}
