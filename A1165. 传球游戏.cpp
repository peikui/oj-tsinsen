#include<iostream>

using namespace std;

int main()
{
	int n, m, a[33][33] ={0};
	cin >> n >> m;
	a[0][1] = 1;
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j == n)
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][1];
				continue;				
			}
			if(j == 1)
			{
				a[i][j] = a[i - 1][n] + a[i - 1][j + 1];	
				continue;				
			}
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
		}
	}
	cout << a[m][1] << endl;
	return 0;
}
