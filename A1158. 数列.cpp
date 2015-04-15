#include<iostream>
#include<cmath>

using namespace std;

int check(int n)
{
	int i = 0;
	while(n % 2 == 0)
	{
		n /= 2;
		i++;
	} 
	if(n == 1)
		return i;
	else
		return 0;
}


int main()
{
	int i, k, n;
	cin >> k >> n;
	i = check(n);
	if(i)
		cout << pow(k, i) << endl;
	return 0;
} 
