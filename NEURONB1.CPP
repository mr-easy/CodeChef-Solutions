#include<stdio.h>
int main()
{
    long int a, b, reva, revb, sum, revsum, cases;
    scanf("%ld", &cases);
    while(cases)
    {
        scanf("%ld%ld", &a, &b);

        reva = 0;
        revb = 0;

        //reversing a
        while(a > 0)
        {
            reva = reva*10 + a%10;
            a /= 10;
        }

        //reversing b
        while(b > 0)
        {
            revb = revb*10 + b%10;
            b /= 10;
        }

        sum = reva + revb;

        revsum = 0;
        //reversing sum
        while(sum > 0)
        {
            revsum = revsum*10 + sum%10;
            sum /= 10;
        }

        printf("%ld\n", revsum);

        cases--;

    }

    return 0;
}
