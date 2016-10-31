#include<stdio.h>
using namespace std;
int main()
{
    unsigned long int n, k, num, cnt = 0;
    scanf("%lu%lu", &n, &k);
    for(unsigned long int i = 0; i < n; i++)
    {
        scanf("%lu", &num);
        if(num % k == 0)
            cnt++;
    }
    printf("%lu", cnt);
    return 0;
}
