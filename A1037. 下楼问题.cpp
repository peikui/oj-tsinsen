#include<iostream>
#include<algorithm>

using namespace std;

int dp(int n)
{
	if(n == 1)	
		return 1;
	if(n == 2)	
		return 2;
	if(n == 3)	
		return 4;
	return dp(n - 1) + dp(n - 2) + dp(n - 3);
}


int main()
{
	int n, a[23] = {1, 2, 4};
	cin >> n;
	if(n >= 4 && n <= 20)
		cout << dp(n) << endl;
	else
		cout << 0 << endl;
		
/*	
	if(n >= 4 && n <= 20)
	{
		for(int i = 3; i <= n - 1; i++)
			a[i] = a[i - 1] + a[i - 2] + a[i - 3];
		cout << a[n - 1] << endl;		
	}
	else
		cout << 0 << endl;
*/
	return 0;
} 
