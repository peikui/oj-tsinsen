#include<iostream>

using namespace std;

int main()
{
	int n, a[1005] = {1,1};
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		for(int j = 0; j <= i /2; j++)
		{
			a[i] += a[j];		
		}
	}
	cout << a[n] << endl;
	return 0;
} 
