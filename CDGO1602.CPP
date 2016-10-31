#include<stdio.h>
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n;
        scanf("%d", &n);
        long long int m, f, s[n];
        scanf("%lld%lld", &m, &f);
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &s[i]);
        }
        long long int mscore = 0, fscore = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 0)
                continue;
            if(s[i]%m == 0)//multan fights first
            {
                mscore++;
                s[i] = -1;
            }
            if(s[i] >= 0)//if multan loses fultan fights
            {
                if(s[i]%f == 0)
                {
                    fscore++;
                }
            }
        }
        if((((float)mscore + fscore) / n) >= 0.7)
        {
            printf("Yes\n");
            if(mscore > fscore)
                printf("Multan\n");
            else if(mscore == fscore)
                printf("Both\n");
            else
                printf("Fultan\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
