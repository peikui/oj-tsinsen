#include<iostream>

using namespace std;

int main()
{
	int a[10], n, count = 0;
	for(int i =0; i < 10; i++)
		cin >> a[i];
	cin >> n;
	for(int i =0; i < 10; i++)
	{
		if(a[i] <= n + 30)
			count++;
	}
	cout << count << endl;
	return 0;
} 
