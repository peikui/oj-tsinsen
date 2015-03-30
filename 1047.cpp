#include<iostream>
using namespace std;

int main()
{
	int m,n,i,j,c,min;
	int a[55][105];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(j=0;j<m;j++)
	{
		c=1,i=0;
		while(a[i][j]==0&&i<n)
		{
			i++;
		}
		if(i==n)
		{
			cout<<0<<" ";
		}
		else
		{
			min=a[i][j];
			c=i+1;
			for(;i<n-1;i++)
			{
				if(a[i+1][j]<=min&&a[i+1][j]!=0)
				{
					c=i+2;
					min=a[i+1][j];
				}
			}
			cout<<c<<" ";
		}	
	}
	return 0;
} 
