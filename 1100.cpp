#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(b<10)
	{
		cout<<"  "<<a<<endl;
		cout<<'*'<<"  "<<b<<endl;
		cout<<"----"<<endl;
		if(a*b>=100)
		{
			cout<<" "<<a*b<<endl;
		}
		else
		{
			cout<<"  "<<a*b<<endl;
		}
	}
	else
	{
		cout<<"  "<<a<<endl;
		cout<<"*"<<" "<<b<<endl;
		cout<<"----"<<endl;
		if(a*(b%10)>=100)
		{
			cout<<" "<<a*(b%10)<<endl;
		}
		else
		{
			cout<<"  "<<a*(b%10)<<endl;
		}
		if(a*(b/10)>=100)
		{
			cout<<a*(b/10)<<endl;
		}
		else
		{
			cout<<" "<<a*(b/10)<<endl;
		}
		cout<<"----"<<endl;
		if(a*(b/10)*10+a*(b%10)>=1000)
		{
			cout<<a*(b/10)*10+a*(b%10)<<endl;
		}
		else
		{
			cout<<" "<<a*(b/10)*10+a*(b%10)<<endl;
		}
	}
	return 0;
} 
