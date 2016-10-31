#include<iostream>
using namespace std;
int main()
{
//	clrscr();
	int n, lucky = 0, unlucky = 0;
	cin>>n;
	int* A = new int[n];
	for(int i = 0; i < n; i++)
		cin>>A[i];

	for(int i = 0; i < n; i++)
	{
		if(A[i] % 2 == 0)
			lucky++;
		else
			unlucky++;
	}

	if(lucky > unlucky)
		cout<<"READY FOR BATTLE";
	else
		cout<<"NOT READY";

//	getch();
	return 0;
}


