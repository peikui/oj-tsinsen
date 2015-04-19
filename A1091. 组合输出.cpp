#include<iostream>

using namespace std;

void print(int n, int m)
{
	for(int i = n + 1; i <= m; i++)
	{
		cout << n << " " << i << endl;	
	}
} 

int main() 
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i < n;i++)
	{
		print(i, m);
	}
	return 0;
}
