#include<stdio.h>
int main()
{
    int first, second, n;
    scanf("%d%d%d", &first, &second, &n);
    for(int i = 3; i <= n; i++)
    {
        int ans = first + second;
        first = second;
        second = ans;
    }
    if(n == 1)
        printf("%d\n", first);
    else
        printf("%d\n", second);

    return 0;
}
