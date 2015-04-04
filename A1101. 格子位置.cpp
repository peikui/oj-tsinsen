#include<iostream>

using namespace std;

int n, i, j;

void print1(int i, int j)
{
	for(int k = 1; k <= n; k++)
	{
		cout << "(" << i << "," << k << ")";
	}
	cout << endl;
} 

void print2(int i, int j)
{
	for(int k = 1; k <= n; k++)
	{
		cout << "(" << k << "," << j << ")";
	}
	cout << endl;
}

void print3(int i, int j)
{
	while(i > 1 && j > 1 )
	{
		i--;
		j--;
	}
	for(;(i >= 1 && i <= n) && (j >= 1 && j <= n); i++, j++)
	{
		cout << "(" << i << "," << j << ")";
	}
	cout << endl;
} 

void print4(int i, int j)
{
	while(i < n && j > 1 )
	{
		i++;
		j--;
	}
	for(;(i >= 1 && i <= n) && (j >= 1 && j <= n); i--, j++)
	{
		cout << "(" << i << "," << j << ")";
	}
	cout << endl;
} 
 

int main()
{
	cin >> n >> i >> j;
	print1(i,j);
	print2(i,j);
	print3(i,j);
	print4(i,j);
	return 0;
}
