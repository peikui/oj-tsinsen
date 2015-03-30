#include<iostream>
#include<cstdio> 
using namespace std;

string a[] ={"yi", "er", "san","si", "wu", "liu", "qi", "ba", "jiu"};

string trans(int n)
{
	return a[n-1];
}

void low(int n)
{
	int qian, bai, shi, ge;
	qian = n / 1000;
	bai = n / 100 % 10;
	shi = n / 10 % 10;
	ge = n % 10;
	if(qian != 0)
	{
		cout << trans(qian) << " " << "qian" << " ";  
	}
	else if(bai != 0)
	{
		cout << "ling" << " "; 
	}
	if(bai != 0)
	{
		cout << trans(bai) << " " << "bai" << " ";
	}
	else if(shi != 0)
	{
		cout << "ling" << " ";
	}
	if(shi != 0)
	{
		cout << trans(shi) << " " << "shi" << " ";
	}
	else if(ge != 0 )
	{
		cout << "ling" << " ";
	}
	if(ge != 0)
	{
		cout << trans(ge) << " ";
	}
}

void low2(int n)
{
	int qian, bai, shi, ge;
	qian = n / 1000;
	bai = n / 100 % 10;
	shi = n / 10 % 10;
	ge = n % 10;
	if(qian != 0)
	{
		cout << trans(qian) << " " << "qian" << " ";  
	}
	if(bai != 0)
	{
		cout << trans(bai) << " " << "bai" << " ";
	}
	else if(qian != 0 && (shi != 0 || ge != 0))
	{
		cout << "ling" << " ";
	}
	if(shi != 0)
	{
		if(qian == 0 && bai == 0)
		{
			cout << "shi" << " ";
		} 
		else
		{
			cout << trans(shi) << " " << "shi" << " "; 
		}
	}
	else if(bai != 0 && ge != 0 )
	{
		cout << "ling" << " ";
	}
	if(ge != 0)
	{
		cout << trans(ge) << " ";
	}
}

void middle(int n)
{
	int qian, bai, shi, ge;
	qian = n / 1000;
	bai = n / 100 % 10;
	shi = n / 10 % 10;
	ge = n % 10;
	if(qian != 0)
	{
		cout << trans(qian) << " " << "qian" << " ";  
	}
	else if(bai != 0)
	{
		cout << "ling" << " "; 
	}
	if(bai != 0)
	{
		cout << trans(bai) << " " << "bai" << " ";
	}
	else if(shi != 0)
	{
		cout << "ling" << " ";
	}
	if(shi != 0)
	{
		cout << trans(shi) << " " << "shi" << " ";
	}
	else if(ge != 0 )
	{
		cout << "ling" << " ";
	}
	if(ge != 0)
	{
		cout << trans(ge) << " ";
	}
	cout << "wan" << " ";
}

void middle2(int n)
{
	int qian, bai, shi, ge;
	qian = n / 1000;
	bai = n / 100 % 10;
	shi = n / 10 % 10;
	ge = n % 10;
	if(qian != 0)
	{
		cout << trans(qian) << " " << "qian" << " ";  
	}
	if(bai != 0)
	{
		cout << trans(bai) << " " << "bai" << " ";
	}
	else if(qian != 0 && (shi != 0 || ge != 0))
	{
		cout << "ling" << " ";
	}
	if(shi != 0)
	{
		if(qian == 0 && bai == 0)
		{
			cout << "shi" << " ";
		} 
		else
		{
			cout << trans(shi) << " " << "shi" << " "; 
		}
	}
	else if(bai != 0 && ge != 0 )
	{
		cout << "ling" << " ";
	}
	if(ge != 0)
	{
		cout << trans(ge) << " ";
	}
	cout << "wan" << " ";
}

void high(int n)
{
	int shi, ge;
	shi = n / 10;
	ge = n % 10;
	if(shi == 1)
	{
		cout << "shi" << " ";
	}
	else if(shi == 2)
	{
		cout << trans(shi) << "shi" << " "; 
	}
	if(ge != 0)
	{
		cout << trans(ge) << " ";
	}
	cout << "yi" << " ";
}

int main()
{
//	freopen("data.txt", "r", stdin);
//	freopen("data1.txt", "w", stdout);
	int lownumber, middlenumber, highnumber, n;
	cin >> n;
//	while(cin >> n){
	lownumber = n % 10000;
	middlenumber = n / 10000 % 10000;
	highnumber = n / 100000000;
	if(highnumber != 0)
	{
		high(highnumber);
		if(middlenumber != 0)
		{
			middle(middlenumber);
			low(lownumber);
		}
		else
		{
			cout << "ling" << " ";
			low2(lownumber); 
		}
//		cout << n << endl;
	}
	else if(middlenumber != 0)
	{
		middle2(middlenumber);
		low(lownumber);
//		cout << n << endl; 
	} 
	else
	{
		low2(lownumber);
//		cout << n << endl;
	}
//  }
	return 0;
} 
