#include<iostream>
using namespace std;
int main()
{
    unsigned long int* a;
    unsigned long int s;
    unsigned long int smallest, small;
    int cases;
    cin>>cases;
    while(cases)
    {
        cin>>s;
        a = new unsigned long int[s];
        for(int i = 0; i < s; i++)
        {
            cin>>a[i];
        }
        if(a[0] < a[1])
        {
            smallest = a[0];
            small = a[1];
        }
        else
        {
            smallest = a[1];
            small = a[0];
        }

        for(int i = 2; i < s; i++)
        {
            if(a[i] < smallest)
            {
                small = smallest;
                smallest = a[i];
            }
            else if(a[i] < small)
            {
                small = a[i];
            }
        }

        cout<<smallest + small<<"\n";
        cases--;
    }

    return 0;
}
