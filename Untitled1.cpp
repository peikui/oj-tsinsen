#include<iostream>

using namespace std;

void an(int n)
{
	if(n == 1)
		cout << 'sin(1';
	
}

void sn(int n)
{
	if(n != 1)
		cout << '(' << sn(n - 1) << ')' << an(n) << '+' << N - n + 1;
	else
		cout << '(' << an(n) << ')' << '+' << N - n + 1;
}

int N;

int main()
{
	cin >> N;
	sn(N);
	cout << endl;
	return 0;
}
