#include<iostream>
#include<string.h> 
using namespace std;

const int maxn = 400005;
char c[maxn];

int CharToInt(char c)
{
	if(c >= '0' && c <='9')
		return c - '0';
	else
		return c - 'A' + 10;
}

void trans(string a)
{
	int temp, m, k = 0;
	memset(c, 0, sizeof(c));
	for(int i = a.size() - 1; i >= 0; i--)
	{
		temp = CharToInt(a[i]);
		for(int j = 0; j < 4; j++, k++)
		{
			c[k] = temp % 2 + '0';
			temp /= 2;
		}
	}
	while(strlen(c) % 3 != 0)
	{
		c[k] = '0';
		k++;
	}
	int i = strlen(c);
	do
	{
		i -= 3;
		m = c[i] - '0' + (c[i + 1] - '0') * 2 + (c[i + 2] - '0') * 4;
	}while(m == 0);
	for(; i >=0; i -= 3)
	{
		m = c[i] - '0' + (c[i + 1] - '0') * 2 + (c[i + 2] - '0') * 4; 
		cout << m;
	}
}

int main()
{
	int n;
	string a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		trans(a);
		cout << endl;
	}
	return 0;
} 
