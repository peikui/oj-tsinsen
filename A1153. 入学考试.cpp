#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t, m;
	int value[105][1005];
	int w[105], c[105];
	cin >> t >> m;
	for(int i = 1; i <= m; i++)
	{
		cin >> w[i] >> c[i];
	}
	for(int i = 0; i <= m; i++)
		value[i][0] = 0;
	for(int i = 0; i <= t; i++)
		value[0][i] = 0;
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1;j <= t; j++)
		{
			if(j < w[i])
				value[i][j] = value[i - 1][j];
			else
				value[i][j] = max(value[i - 1][j], value[i - 1][j - w[i]] + c[i]);
		}
	}
	cout << value[m][t] << endl;
	return 0;
} 
