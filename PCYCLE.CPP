#include<stdio.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int cycle[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cycle[i][j] = 0;
    int noCycles = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int initialPos = 0;
    int newPos = 0;
    int numbers = 0;
    do{
        int i = 1;
        do
        {
            cycle[noCycles][i] = a[newPos];
            int tmp = newPos;
            newPos = a[newPos] - 1;
            a[tmp] = -1;
            numbers++;
            i++;
        }while(newPos != initialPos);
        cycle[noCycles][0] = cycle[noCycles][i - 1];
        noCycles++;
        int j;
        for(j = 0; j < n; j++)
        {
            if(a[j] != -1)
                break;
        }
        initialPos = j;
        newPos = j;
    }while(numbers != n);

    printf("%d\n", noCycles);
    for(int p = 0; p < noCycles; p++)
    {
        for(int q = 0; cycle[p][q] != 0; q++)
        {
            printf("%d ", cycle[p][q]);
        }
        printf("\n");
    }

    return 0;
}
