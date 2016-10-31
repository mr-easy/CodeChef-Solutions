#include<stdio.h>
int main()
{
    long  int cases;
    scanf("%ld", &cases);
    bool fail, high;
    while(cases--)
    {
        fail = false;
        high = false;
        long int n;
        long int sum = 0;
        scanf("%ld", &n);
        int a[n];
        for(long int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(!fail && a[i] == 2){
                fail = true;
            }
            if(!high && a[i] == 5){
                high = true;
            }
            sum += a[i];

        }
        if(fail || !high){
            printf("No\n");
        }
        else{
            float avg = sum / n;
            if(avg >= 4.0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
