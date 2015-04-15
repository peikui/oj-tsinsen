#include<iostream>

using namespace std;

const int maxn = 10005;

int main()
{
	int l, r, count = 0;
	cin >> l >> r;
	for(int i = l; i <= r; i++)
	{
		int j = i; 
		do
		{
			if(j % 10 == 2)
				count++;
			j /= 10; 
		}while(j != 0);
	}
	cout << count << endl;
	return 0;
} 
