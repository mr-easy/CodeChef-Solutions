#include<stdio.h>
using namespace std;
int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int n, k;
        int ans = 0;
        scanf("%d%d", &n, &k);
        int A[101];
        int V[101] = {0};
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
            if(A[i] - 1 == i)
            {
                V[A[i] - 1] = -1;
            }
            else if(V[A[i] - 1] != -1)
            {
                V[A[i] - 1]++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(V[i] >= k)
            {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;

}
