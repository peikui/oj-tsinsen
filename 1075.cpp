#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
//	freopen("data.txt","r",stdin);
	string a[] = {"zero", "one", "two", "three", "four","five", "six", "seven", 
	"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", 
	"sixteen", "seventeen", "eighteen", "nineteen", "twenty" };
	string b[] = {" ", " ", "twenty", "thirty", "forty", "fifty"};
	int n, m;
	cin >> n >> m;
//while(cin >> n >> m){
	if(n <= 20)
	{
		cout << a[n] << " ";
	}
	else
	{
		cout << a[n - n % 20] << " " << a[n % 20] << " ";
	}
	if(m == 0)
	{
		cout << "o'clock" << endl;
	}
	else if(m <= 20)
	{
		cout << a[m] << endl;
	}
	else
	{
		if(m % 10 == 0)
		{
			cout << b[m / 10] << endl;
		}
		else
		{
			cout << b[m / 10] << " " << a[m % 10] << endl;	
		}
	}
//}
	return 0;
} 
