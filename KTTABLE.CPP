#include<stdio.h>
int main()
{
    long int n, cnt, first, second, cases;
    scanf("%ld", &cases);
    while(cases)
    {
        scanf("%ld", &n);
        long int *givenTime = new long int[n];
        long int *reqdTime = new long int[n];
        for(long int i = 0; i < n; i++)
            scanf("%ld", &givenTime[i]);
        for(long int i = 0; i < n; i++)
            scanf("%ld", &reqdTime[i]);
        cnt = 0;
        first = 0;
        second = 0;
        for(long int i = 0; i < n; i++)
        {
            first = second;
            second = givenTime[i];
            if(second - first >= reqdTime[i])
                cnt++;
        }
        printf("%ld\n", cnt);
        cases--;
    }
    return 0;
}
