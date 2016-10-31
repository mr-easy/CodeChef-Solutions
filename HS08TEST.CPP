#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float initialAmount, withdrawAmount;
    cin>>withdrawAmount>>initialAmount;
    if(((int)withdrawAmount % 5 != 0)||((withdrawAmount+0.5) > initialAmount))
    {
        cout<<initialAmount;
        return 0;
    }
    float newAmount = initialAmount - (withdrawAmount + 0.5);
    cout<<setiosflags(ios::fixed)
        <<setiosflags(ios::showpoint)
        <<setprecision(2)
        <<newAmount;
    return 0;
}
