#include<iostream>

using namespace std;

void print(int n)
{
	if(n == 1)
		cout << 'A';
	else
	{
		char a = 'A' + n - 1; 
		print(n - 1);
		cout << a;
		print(n - 1); 
	}
}
int main()
{
	int n;
	cin >> n;
	print(n);
	return 0;
} 
