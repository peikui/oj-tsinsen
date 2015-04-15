#include<iostream>
#include<cstring>

using namespace std;

int a[32][32], b[32][32], c[32][32];

void CalculateMatrix(int n, int m)
{
	if(m == 0)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(j == i)
				{
					c[i][j] = 1;
				}
				else
				{
					c[i][j] = 0;	
				}
			}
		}
	}
	while(m > 1)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				b[i][j] = c[i][j];
			}
		}
		memset(c, 0, sizeof(c));
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				for(int k = 0; k < n; k++)
				{
					c[i][j] += a[i][k] * b[k][j]; 
				}
			}
		}
		m--;		
	}
}

int main()
{
	int n,m;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			b[i][j] = a[i][j];
			c[i][j] = a[i][j];
		}
	}
	CalculateMatrix(n, m);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
