#include<stdio.h>
int main()
{
    long int cases, n;
    bool found;
    scanf("%ld", &cases);
    while(cases--)
    {
        scanf("%ld", &n);
        found = false;
        unsigned long int *a = new unsigned long int[n];
        for(long int i = 0; i < n; i++)
        {
            scanf("%ld", &a[i]);
            if(i >= 2 && !found && a[i] == a[i-1] && a[i-1] == a[i-2])
            {
                found = true;
            }
        }
        if(found)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
