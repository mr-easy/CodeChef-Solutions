//Shortest Path in Binary Trees
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int cases;
    scanf("%ld", &cases);
    while(cases--)
    {
        long long int i, j, ans;
        scanf("%lld%lld", &i, &j);
        // convert to a 32 bit length binary string
        string bitstr = bitset<32>(i).to_string();
        // get the sub-string
        int index = 0;
        string q1;
        for(unsigned int i = 0; i < bitstr.length(); ++i) {
            if(bitstr[i] == '1') {
                index = i;
                break;
            }
        }
        q1 = bitstr.substr(index);

        bitstr = bitset<32>(j).to_string();
        // get the sub-string
        index = 0;
        string q2;
        for(unsigned int i = 0; i < bitstr.length(); ++i) {
            if(bitstr[i] == '1') {
                index = i;
                break;
            }
        }
        q2 = bitstr.substr(index);

        if(q1 == q2)
        {
            printf("0\n");
            continue;
        }
        int k;
        for(k = 0; k < 32; k++)
        {
            if(q1[k] != q2[k])
                break;
        }
        ans = (q1.size() - k) + (q2.size() - k);
        //cout<<q1<<endl<<q2<<endl;
        printf("%ld\n", ans);
    }
    return 0;
}
