#include<iostream>
#include<algorithm> 

using namespace std;

int main()
{
	int n, m, v[30] = {0}, p[30] = {0},value[30][30005];
	cin >> n >> m;
	for(int i = 1; i <= m; i++)
		cin >> v[i] >> p[i];
	for(int i = 0; i <= m; i++)
		value[i][0] = 0;
	for(int j = 0; j <= n; j++)
		value[0][j] = 0;
	for(int i = 1; i <=m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j < v[i])
				value[i][j] = value[i - 1][j];
			else
				value[i][j] = max(value[i - 1][j], value[i - 1][j - v[i]] + v[i] * p[i]);
		}
	}
	cout << value[m][n] << endl;
	return 0;
} 
