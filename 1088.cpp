#include<iostream>
using namespace std;

int main()
{
	int a[35],s=0,i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(n)
	{
		for(i=0;i<n-1;i++)
		{
			a[i]=a[i+1]-a[i];
		}
		s+=a[n-1];
		n--;
	}
	cout<<s;
	return 0;
} 
