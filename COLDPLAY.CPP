#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n;
     scanf("%lld", &n);
     string s;
     cin>>s;
     set< pair<long int, long int> > coordinates;
     coordinates.insert(make_pair(0,0));
     long int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
     for(long int i = 0; i < n; i++)
     {
         if(i % 2 == 0)
         {
             switch(s[i])
             {
                 case 'U':y1++;break;
                 case 'D':y1--;break;
                 case 'L':x1--;break;
                 case 'R':x1++;break;
             }
             coordinates.insert(make_pair(x1, y1));
         }
         else
         {
             switch(s[i])
             {
                 case 'U':y2++;break;
                 case 'D':y2--;break;
                 case 'L':x2--;break;
                 case 'R':x2++;break;
             }
             coordinates.insert(make_pair(x2, y2));
         }
     }
     cout<<coordinates.size()<<endl;
     return 0;
}
