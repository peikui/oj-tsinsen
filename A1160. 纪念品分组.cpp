#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, w, begin, end, a[30005], count = 0;
	cin >> w >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	begin = 0, end = n - 1;
	while(begin < end)
	{
		if(a[begin] + a[end] <= w)
		{
			count++;
			begin++, end--;			
		}
		else
		{
			count++;
			end--;
		}
	}
	if(begin == end)
		cout << count + 1 << endl;
	else
		cout << count << endl;
	return 0;
} 
