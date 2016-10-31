#include<stdio.h>
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n, l, b;
        scanf("%d%d%d", &n, &l, &b);
        for(int i = 0; i < n; i++)
        {
            if(l > b)
            {
                l -= b;
            }
            else
            {
                b -= l;
            }
            if(l * b <= 0)
                break;
        }
        if(l * b <= 0)
            printf("No\n");
        else
            printf("Yes %d\n", (l * b));
    }
    return 0;
}
