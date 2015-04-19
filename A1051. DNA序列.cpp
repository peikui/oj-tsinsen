#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[102][102];
	int b[4];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
/*	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
	cout << strlen(a[1]);
*/
	int l = strlen(a[0]);
	for(int j = 0;j < l; j++)
	{
		memset(b, 0, sizeof(int) * 4);
		for(int i = 0; i < n; i++)
		{
			switch(a[i][j])
			{
				case 'A':{
					b[0]++;
					break;
				}
				case 'C':{
					b[1]++;
					break;
				}
				case 'G':{
					b[2]++;
					break;
				}
				case 'T':{
					b[3]++;
					break;
				}
			}
		}
		int m = 0, sum = 0;
		for(int k = 0; k < 4; k++)
		{
			if(b[k] > sum)
			{
				sum = b[k];
				m = k;
			}
		}
		if(m == 0)
			cout << 'A';
		if(m == 1)
			cout << 'C';
		if(m == 2)
			cout << 'G';
		if(m == 3)
			cout << 'T';
	}
	return 0;
} 
