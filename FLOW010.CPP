#include<iostream>
using namespace std;
int main()
{
    int cases;
    char ch;
    cin>>cases;
    while(cases)
    {
        cin>>ch;
        switch(ch)
        {
        case 'b':
        case 'B':cout<<"BattleShip\n";
                 break;
        case 'c':
        case 'C':cout<<"Cruiser\n";
                 break;
        case 'd':
        case 'D':cout<<"Destroyer\n";
                 break;
        case 'f':
        case 'F':cout<<"Frigate\n";
                 break;
        }
        cases--;
    }
    return 0;
}
