#include<iostream>
using namespace std;
int main()
{
	int cases;
	cin>>cases;
	while(cases > 0)
	{
		int n;
		cin>>n;
		int streak = 1;
		int current;
		int previous;            // 0 for negative and 1 for positive
		int* a = new int[n];
		int* ans = new int[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];

		if(a[n-1] > 0)                   // last element
			previous = 1;            //positive
		else
			previous = 0;            //negative

		ans[n-1] = 1;

		for(int i = n-2; i >= 0; i--)
		{
			if(a[i] > 0)
				current = 1;    //positive
			else
				current = 0;    //negative

			if(current != previous) //if both are not equal streak continues
				streak++;
			else
				streak = 1;    //else the streak breaks

			ans[i] = streak;
			previous = current;
		}

		for(int j = 0; j < n; j++)
			cout<<ans[j]<<" ";

		cases--;
	}
	return 0;
}
