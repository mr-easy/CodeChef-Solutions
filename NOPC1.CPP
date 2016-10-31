#include<iostream>
#include<string>
using namespace std;
int main()
{
    string M;
    string S;
    std::getline(std::cin, M);
    std::getline(std::cin, S);
    if(M.find(S) == -1)
        cout<<"N\n";
    else
        cout<<"Y\n";

    return 0;
}
