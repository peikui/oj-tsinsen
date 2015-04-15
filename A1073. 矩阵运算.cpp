#include<iostream>

using namespace std;

const int maxn = 105;

int main()
{
	int n, a[maxn][maxn];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << a[i][j] + a[j][i] << " ";
		}
		cout << endl;
	}	
	return 0;
} 
