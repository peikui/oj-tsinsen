#include<iostream>
#include<cstring>
#include<cstdio> 
using namespace std;

const int maxn = 80;

int main()
{
	int n;
	char a[maxn];
	memset(a, 0, sizeof(a));
	cin >> n;
	a[0] = 1;
	for(int i = 0; i < n + 1; i++)
	{
		int r = 0;
		for(int j = 0; j < maxn; j++)
		{
			int c = a[j] * 2 + r;
			a[j] = c % 10;
			r = c / 10;
		}
	} 
	int i = maxn - 1;
	while(!a[--i]);
	for(; i > 0 ; i--)
	{
		printf("%d",a[i]); 
	}
	cout << a[i] - 2 << endl;
	return 0;
}
