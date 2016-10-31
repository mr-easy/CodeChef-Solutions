#include<iostream>
using namespace std;
// GRADE THE STEEL
int main()
{
    double a, b, c;
    int grade, cases;
    cin>>cases;
    while(cases)
    {
        cin>>a>>b>>c;
        if(a > 50 && b < 0.7 && c > 5600)
        {
            grade = 10;
        }
        else if(a > 50 && b < 0.7)
            grade = 9;
        else if(b < 0.7 && c > 5600)
            grade = 8;
        else if(a > 50 && c > 5600)
            grade = 7;
        else if(a > 50|| b < 0.7 || c > 5600)
            grade = 6;
        else
            grade = 5;
        cout<<grade<<"\n";
        cases--;
    }
    return 0;
}
