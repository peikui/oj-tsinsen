#include<iostream>
using namespace std;

int main()
{
	int n,i,j,m,c;
	int s[3002]={0};
	s[0]=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=0;j<3000;j++)
		{
			m=s[j]*i+c;
			s[j]=m%10;
			c=m/10;
		}
	}
	i=3000;
	while(s[i]==0)
	{
		i--;
	}
	for(;i>=0;i--)
	{
		cout<<s[i];
	}
	return 0;
} 
