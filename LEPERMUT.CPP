#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int inversions = 0, localInversions = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[i] > a[j])
                    inversions++;
            }
            if(i < n-1)
            {
                if(a[i] > a[i+1])
                    localInversions++;
            }
        }
        if(inversions == localInversions)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
