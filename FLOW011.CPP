#include<iostream>
using namespace std;
int main()
{
    int cases;
    double salary;
    cin>>cases;
    while(cases)
    {
        cin>>salary;
        if(salary < 1500)
        {
            salary *= 2;
        }
        else
        {
            salary *= 1.98;
            salary += 500;
        }

        cout<<salary<<"\n";

        cases--;
    }
    return 0;
}
