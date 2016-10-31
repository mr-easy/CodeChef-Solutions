#include<iostream>
using namespace std;
int main()
{
    int a, b, correct, incorrect;
    cin>>a>>b;
    correct = a - b;
    if(correct%10 == 9)           
        incorrect = correct - 1;   
    else
        incorrect = correct + 1;   
    cout<<incorrect<<"\n";
    return 0;
}
