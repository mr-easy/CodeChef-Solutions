#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n;//number of players
        scanf("%d", &n);
        int score[n];
        for(int j = 0; j < n; j++)  //for each player
        {
            int type[6] = {0};
            int a;//number of cookies
            scanf("%d", &a);
            score[j] = a;
            int t;
            for(int i = 0; i < a; i++)
            {
                scanf("%d", &t);
                type[t-1]++;
            }
            std::sort(type, type+6);

            score[j] += type[0] * 4;
            int k = type[0];
            for(int o = 0; o < 6; o++)
                type[o] -= k;
            if(type[1] > 0)//if positive number of cookies left
            {
                score[j] += type[1] * 2;
                int k = type[1]; //number of cookies used in packs of 5 cookies
                for(int o = 1; o < 6; o++)
                    type[o] -= k;
            }
            if(type[2] > 0)
            {
                score[j] += type[2] * 1;
            }
        }
        //Finding the winner
        int mx = -1, winner = -1;
        bool draw = false;
        for(int i = 0; i < n; i++)
        {
            if(mx < score[i])
            {
                mx = score[i];
                winner = i;
                draw = false;
            }
            else if(mx == score[i])
            {
                draw = true;
            }
        }
        if(draw)
            printf("tie\n");
        else if(winner == 0)
        {
            printf("chef\n");
        }
        else
        {
            printf("%d\n", winner + 1);
        }

    }
    return 0;
}
