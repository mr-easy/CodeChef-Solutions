#include<stdio.h>
#include<algorithm>
using namespace std;

//findMin function
int findMin(int* A,int k, int sze)
{
	int minimum = A[k];
	int loc = k;
	for(int i = k; i<sze; i++)
	{
		if(minimum > A[i])
		{
			minimum = A[i];
			loc = i;
		}
	}
	return loc;
}

int main()
{
	int cases;
	long long int n, k;
	double avg;
    scanf("%d", &cases);
	while(cases--)
	{

		scanf("%lld%lld", &n, &k);

        long long int a[n];
		for(long long int j = 0; j < n; j++)
            scanf("%lld", &a[j]);

		std::sort(a, a+n);

        avg = 0;
		for(long long int s = k; s < n-k; s++)
		{
			avg += a[s];
		}
		avg = avg/(n - (2*k));
        printf("%.6f\n", avg);
	}
	return 0;
}
