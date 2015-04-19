#include<iostream>
#include<cstring>
using namespace std;

void pre(char a[], char b[], int n)
{
	cout << b[n - 1];
	char la[n], lb[n], ra[n], rb[n];
	int i = 0;
	while(a[i] != b[n - 1])
	{
		la[i] = a[i];
		lb[i] = b[i];
		i++;
	}
	int j = i++;
	while(i != n)
	{
		ra[i - j - 1] = a[i];
		rb[i - j - 1] = b[i - 1];
		i++;
	}
	if(j != 0)
		pre(la, lb, j);
	if(n - j - 1 != 0)
		pre(ra, rb, n - j - 1);	
}

int main()
{
	char a[10], b[10];
	cin >> a >> b;
	pre(a, b, strlen(a));
	cout << endl;
	return 0; 
} 
