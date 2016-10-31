#include<iostream>
using namespace std;
//Minimum function
int Minimum(int* a, int k, int n)
{
    int m, loc;
    m = a[k];
    loc = k;
    for(int i = k + 1; i < n; i++)
    {
        if(m > a[i])
        {
            m = a[i];
            loc = i;
        }
    }
    return loc;
}

int main()
{
    int n, loc, temp, cnt, piePtr, rackPtr;
    int* pie;
    int* rack;
    int cases;
    cin>>cases;

    while(cases)
    {
        cin>>n;
        pie = new int[n];
        rack = new int[n];

        for(int i = 0; i < n; i++)
            cin>>pie[i];

        for(int i = 0; i < n; i++)
            cin>>rack[i];

        //Selection sort for pies...
        for(int i = 0; i < n; i++)
        {
            loc = Minimum(pie, i, n);
            temp = pie[loc];
            pie[loc] = pie[i];
            pie[i] = temp;
        }
        //Selection sort for racks...
        for(int i = 0; i < n; i++)
        {
            loc = Minimum(rack, i, n);
            temp = rack[loc];
            rack[loc] = rack[i];
            rack[i] = temp;
        }

        cnt = 0;
        piePtr = 0;
        rackPtr = 0;

        while(rackPtr < n && piePtr < n)
        {
            if(rack[rackPtr] >= pie[piePtr])
            {
                cnt++;
                rackPtr++;
                piePtr++;
            }
            else
            {
                rackPtr++;
            }
        }

        cout<<cnt<<"\n";

        cases--;
    }

    return 0;

}
