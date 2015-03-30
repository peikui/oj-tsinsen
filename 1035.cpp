#include<iostream>
#include<cmath>
using namespace std;

int isprime(int x)
{
	int i;
	if(x<2)
	return 0;
	else if(x==2||x==3)
	return 1;
	else
	{
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
} 

int main()
{
	int n,i,sum;
	while(cin>>n&&n!=0)
	{
		sum=0;
		for(i=1;i<=n;i++)
		{
			if(isprime(i))
			{
				sum+=i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
