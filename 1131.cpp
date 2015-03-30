#include<iostream>
#include<cmath>
using namespace std;

int gcd(int x,int y)
{
	return y==0?x:gcd(y,x%y);
}

int main()
{
	int a,b,c,i,count=0;
	cin>>a>>b;
	if(a<b)
	{
		b=a^b;
		a=a^b;
		b=a^b;
	}
	if(a%b!=0)
	{
		cout<<count<<endl;
	}
	else
	{
		c=a/b;
		for(i=1;i<=sqrt(c);i++)
		{
			if(c%i==0)
			{
				if(gcd(i,c/i)==1)
				{
				//	cout<<i*b<<" "<<c/i*b<<endl;
					count++;
				}
			}
		}
		cout<<count*2<<endl;
	}
	return 0;
} 
