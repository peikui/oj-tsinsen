#include<iostream>

using namespace std;

int year(int i)
{
	return (i % 400 == 0) || (i %100 != 0 && i % 4 == 0) ? 366 : 365; 
} 

int main()
{
	int n, h, sum = 0;
	cin >> n >> h;
	for(int i = n; i < 2013; i++)
	{
		sum += year(i);
	}
	cout << h + sum << endl;
	return 0;
}
