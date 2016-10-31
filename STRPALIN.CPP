#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s1[1111], s2[1111];
    int cases, good;
    scanf("%d", &cases);
    while(cases)
    {

        good = 0;
        scanf("%s%s", &s1, &s2);
        for(int i = 0; s1[i]; i++)
        {
            for(int j = 0; s2[j]; j++)
            {
                if(s1[i] == s2[j])
                {
                    good = 1;
                    break;
                }
            }
            if(good)
                break;
        }
        if(good)
            printf("Yes\n");
        else
            printf("No\n");
        cases--;

    }
	return 0;
}
