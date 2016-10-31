#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int cases;
    float R, x1, y1, x2, y2, x3, y3;
    cin>>cases;
    while(cases)
    {
        cin>>R;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        if(R >= sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) //1 and 2
        {
            if(R >= sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)))  //2 and 3
            {
                cout<<"yes\n";
                goto HERE;
            }
            else if(R >= sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)))   //1 and 3
            {
                cout<<"yes\n";
                goto HERE;
            }
        }
        else if(R >= sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)))   //1 and 3
        {
            if(R >= sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)))    //2 and 3
            {
                cout<<"yes\n";
                goto HERE;
            }
        }
        cout<<"no\n";
        HERE:
        cases--;
    }
    return 0;
}
