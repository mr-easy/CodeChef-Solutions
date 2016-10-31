#include<stdio.h>
int main()
{

        int p1, p2, p3, w;
        scanf("%d%d%d%d", &p1, &p2, &p3, &w);
        int a = p1 + p2;
        int b = p2 + p3;
        int c = p1 + p3;
        if(a >= w || b >= w || c >= w)
            printf("YES\n");
        else
            printf("NO\n");

    return 0;
}
