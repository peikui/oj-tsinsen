#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	char a[45][45];
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*n+1;j++)
		{
			a[i][j]=abs(i-j)+'A';
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i+1;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
