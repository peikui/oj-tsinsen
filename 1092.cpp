#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cout<<(n%10+5)%10*1000+(n/10%10+5)%10*100+(n/100%10+5)%10*10+(n/1000+5)%10<<endl;
	return 0;
} 
