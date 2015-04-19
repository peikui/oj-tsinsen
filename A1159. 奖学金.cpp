#include<iostream>

using namespace std;

const int maxn = 305;

typedef struct{
	int a, b, c, sum, num;
}stu_score;

int main()
{
	stu_score score[maxn];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> score[i].a >> score[i].b >> score[i].c;
		score[i].sum = score[i].a + score[i].b + score[i].c;
		score[i].num = i + 1;
	}
	for(int i = n; i > 1; i--)
	{
		for(int j = 0; j < i - 1; j++)
		{
			if(score[j].sum < score[j + 1].sum || score[j].sum == score[j + 1].sum 
			&& score[j].a < score[j + 1].a)
			{
				stu_score temp;
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < 5; i++)
	{
		cout << score[i].num << " " << score[i].sum << endl;
	}
	return 0;
} 
