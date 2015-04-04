#include<iostream>

using namespace std;

int main()
{
	int n, a, sum = 0;
	cin >> n;
	while(n--)
	{
		cin >> a;
		if(a > 1000)
		{
			sum += a - 1000;
		}
	}
	cout << sum << endl;
	return 0;
} 
