#include<iostream>
#include<algorithm>

using namespace std;

const int MAXN = 105;
int	sum = 0;

bool cmp(int a, int b)
{
	return a > b;
}

void calculate(int a[], int n)
{
	if(n != 1)
	{
		sort(a, a + n, cmp);
		sum += a[n - 2] + a[n - 1];
		a[n - 2] += a[n - 1];
		calculate(a, n - 1);		
	}
}

int main()
{
	int n, a[MAXN];
	cin >> n;
	for(int i = 0 ; i < n; i++)
	{
		cin >> a[i];
	}
	calculate(a, n);
	cout << sum;
	return 0;
} 
