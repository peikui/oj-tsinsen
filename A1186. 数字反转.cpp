#include<iostream>

using namespace std;

void converse(int n)
{
	while(n % 10 == 0)
		n /= 10;
	while(n > 0)
	{
		cout << n % 10;
		n /= 10;
	}
} 


int main()
{
	int n;
	cin >> n;
	if(n < 0)
	{
		n = -n;
		cout << '-';
		converse(n);	
	}
	else
		converse(n);
	cout << endl;
	return 0;
}
