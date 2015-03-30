#include<iostream>
using namespace std;

int main() 
{
	int s1[1005],s2[1005];
	int i,j,l,temp,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	for(i=0;i<n-1;i++)
	{
		l=s1[i]-s1[i+1];
		l=l>0?l:l*(-1);
		s2[i]=l;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(s2[j]>=s2[j+1])
			{
				temp=s2[j];
				s2[j]=s2[j+1];
				s2[j+1]=temp;
			}
		}
	}
	i=0;
	while(s2[i]==i+1&&i<n-1)
	{
		i++;
	}
	if(i==n-1)
	{
		cout<<"I'm happy!!"<<endl;
	}
	else
	{
		cout<<"I'm unhappy!!"<<endl;
	}
	return 0;
}
