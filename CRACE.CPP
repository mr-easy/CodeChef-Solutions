#include<stdio.h>
int main()
{
    long long int cases, n;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld", &n);
        if(n%2 == 0)
            printf("JACK\n");
        else
            printf("JENNY\n");
    }
    return 0;
}
