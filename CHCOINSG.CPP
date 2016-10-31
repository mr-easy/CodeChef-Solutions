#include<stdio.h>
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        long int n;
        scanf("%ld", &n);
        if(n%6 == 0)
            printf("Misha\n");
        else
            printf("Chef\n");
    }
    return 0;
}
