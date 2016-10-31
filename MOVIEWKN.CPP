#include<iostream>
using namespace std;
int main()
{
    int n, mx, index, cases;
    int* l;
    int* r;
    cin>>cases;
    while(cases)
    {
        cin>>n;
        l = new int[n];
        r = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>l[i];
        }
        mx = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>r[i];
            if(mx < l[i] * r[i])
            {
                mx = l[i] * r[i];
                index = i;
            }
            else if(mx == l[i] * r[i])
            {
                if(r[i] > r[index])
                {
                    index = i;
                }
            }
        }
        cout<<index + 1<<"\n";
        delete l;
        delete r;
        cases--;
    }
    return 0;
}
