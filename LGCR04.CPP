#include<stdio.h>
int main()
{
    long int n, sum;
    scanf("%ld", &n);
    sum = n;
    while(n >= 10)
    {
        sum = 0;
        while(n > 0)
        {
            sum += n%10;
            n = n / 10;
        }
        n = sum;
    }

    printf("%ld", sum);
    return 0;
}
