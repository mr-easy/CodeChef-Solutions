//LOUSY GAME
#include<stdio.h>
int A[1001][1001], m, n, possible[1001][1001];
/*
bool possible(int i,int j)
{
    if(A[i][j] == 0)
        return false;
    if(i == 0 && j == n-1)
        return true;
    if(i == 0)
        return possible(i, j+1);
    if(j == n-1)
        return possible(i-1, j);

    return possible(i, j+1) || possible(i-1, j);
}*/
void build()
{
    possible[m-1][0] = true;
    //set all elements in bottom line
    for(int i = 1; i < n; i++)
    {
        if(A[m-1][i] == 0)
        {
            possible[m-1][i] = false;
        }
        else
            possible[m-1][i] = possible[m-1][i-1];
    }
    //set all elements in first row
    for(int i = m-2; i >= 0; i--)
    {
        if(A[i][0] == 0)
            possible[i][0] = false;
        else
            possible[i][0] = possible[i+1][0];
    }

    for(int i = m-2; i >= 0; i--)
    {
        for(int j = 1; j < n; j++)
        {
            if(A[i][j] == 0)
                possible[i][j] = false;
            else
                possible[i][j] = possible[i+1][j] || possible[i][j-1];
        }
    }
}
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        scanf("%d%d", &m, &n);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &A[i][j]);
                possible[i][j] = false;
            }
        }
        build();
        if(possible[0][n-1])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
