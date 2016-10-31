#include<iostream>
using namespace std;
bool isPallindrome(unsigned long int n)
{
    unsigned long int rev = 0;
    unsigned long int a = n;
    while(a > 0)
    {
        rev = rev*10 + a%10;
        a = a / 10;
    }
    if(rev != n)
        return false;
    return true;
}
int main()
{
    int cases;
    unsigned long int l, r;
    unsigned long long sum;
    cin>>cases;
    while(cases)
    {
        cin>>l>>r;
        sum = 0;
        for(unsigned long int i = l; i <= r; i++)
        {
            if(isPallindrome(i))
                sum += i;
        }
        cout<<sum<<"\n";
        cases--;
    }
}
