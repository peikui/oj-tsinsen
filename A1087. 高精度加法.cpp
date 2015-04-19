#include<iostream>
#include<cstring>

using namespace std;

const int MAXN = 105;

int main()
{
	char a[MAXN], b[MAXN], c[MAXN];
	memset(c, 0, MAXN);
	int i, j, r = 0, k = 0;
	cin >> a >> b;
	i = strlen(a) - 1;
	j = strlen(b) - 1;
	while(i >= 0 && j >= 0)
	{
		char temp;
		temp = a[i] - '0' + b[j] - '0' + r;
		c[k++] = temp % 10 + '0';
		r = temp / 10;
		i--, j--;
	}
	while(i >= 0)
	{
		char temp;
		temp = a[i] - '0' + r;
		c[k++] = temp % 10 + '0';
		r = temp / 10;
		i--;
	}
	while(j >= 0)
	{
		char temp;
		temp = b[j] - '0' + r;
		c[k++] = temp % 10 + '0';
		r = temp / 10;
		j--;
	}
	for(k--; k >= 0; k--)
	{
		if(r == 1)
		{
			cout << 1;
			r = 0;			
		}
		cout << c[k];		
	}
	return 0;
} 
