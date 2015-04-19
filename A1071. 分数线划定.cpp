#include<iostream>

using namespace std;

typedef struct{
	int num;
	int score;
}Score;

const int MAXN = 5005;

int main()
{
	int n, m;
	Score s[MAXN];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].num >> s[i].score;
	}
	for (int i = n; i > 1; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if(s[j].score < s[j + 1].score || s[j].score == s[j + 1].score && s[j].num > s[j + 1].num)
			{
				Score temp;
				temp = s[j];
				s[j ] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	int j = m * 3 / 2;
	cout << s[j - 1].score << " ";
	while(s[j - 1].score == s[j].score && j != n)
	{
		j++;
	}
	cout << j << endl;
	for (int i = 0; i < j; i++)
	{
		cout << s[i].num << " " << s[i]. score << endl;
	}
	return 0;
}
