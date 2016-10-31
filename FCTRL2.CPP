#include<stdio.h>
using namespace std;
int main()
{
    unsigned long long int num;
    int fact[500];
    unsigned long long int i, cases;
    scanf("%llu", &cases);
    while(cases--)
    {
        scanf("%llu", &num);
        for(int i = 0; i < 500; i++)
        {
            fact[i] = 0;
        }
        fact[0] = 1;
        int digits = 1;
        int t = 0, c = 0;
        for(long long int i = 1; i <= num; i++)
        {
            for(int k = 0; k < digits; k++)
            {
                t = fact[k] * i + c;
                fact[k] = t % 10;
                c = (int)(t / 10);
            }
            while(c > 0)
            {
                fact[digits++] = c % 10;
                c = c / 10;
            }
        }
        for(int i = digits - 1; i >= 0; i--)
            printf("%d", fact[i]);
        printf("\n");
    }
    return 0;
}
