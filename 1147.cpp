#include<iostream>
using namespace std;

int main()
{
	int a,b,i,j,sum=0;
	for(i=1;i<=7;i++)
	{
		cin>>a>>b;
		if(a+b>sum)
		{
			sum=a+b;
			j=i;
		}
	}	
	cout<<j<<endl;
	return 0;
} 
