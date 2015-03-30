#include<iostream>
#include<cstring>
using namespace std;
 
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
 
int main()
{
	int n,m,i,j,count=0;
	int a[1003],b[1003];
	char c[1003];
	memset(c,'A',sizeof(c));
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,n);
	sort(b,m);
	
	//交集 
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				cout<<b[j]<<" ";
				count++;
				c[i]='B';
			}
		}
	}
	if(count!=0)
	{
		cout<<endl;
	}
	
	//并集 
	i=j=0;
	while(i!=n&&j!=m)
	{
		if(a[i]<b[j])
		{
			cout<<a[i]<<" ";
			i++;
		}
		else if(a[i]>b[j])
		{
			cout<<b[j]<<" ";
			j++;
		}
		else 
		{
			cout<<a[i]<<" ";
			i++,j++;
		}
	}
	if(i==n)
	{
		for(;j<m;j++)
		{
			cout<<b[j]<<" ";
		}
		cout<<endl;
	}
	else
	{
		for(;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
	//a-b 
	for(i=0;i<n;i++)
	{
		if(c[i]=='A')
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
} 
