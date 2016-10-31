#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int cases, h =0;
	char str[100];
	int a, b;
	cin>>cases;
	int* ans = new int[cases];
	while(h<cases)
	{
		a = 0;
		b = 0;
		cin>>str;
		int length = strlen(str);
		for(int i = 0; i< length; i++)
		{
			if(str[i] == 'a')
				a++;
			else if(str[i] == 'b')
				b++;
			else
			{
				cout<<"WRONG INPUT!";
				break;
			}
		}
		if(a < b)
			ans[h] = a;
		else
			ans[h] = b;

		h++;
	}

	for(h = 0; h < cases; h++)
		cout<<ans[h]<<"\n";

	return 0;

}