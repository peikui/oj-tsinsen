#include<stdio.h>
#include<string.h>

const int maxn = 45;

void Delete(char a[], int n, char c)
{
	int i, flag = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] == c && !flag)
		{
			flag = 1;
		}
		else
			printf("%c", a[i]);
	}
	printf("\n");
}

void Insert(char a[], int n, char b, char c)
{
	int i, loc = 0;
	for(i = n - 1; i >= 0; i--)
	{
		if(a[i] == b)
		{
			loc = i;
			break;
		}
	}
	for(i = 0; i < n; i++)
	{
		if(i != loc)
			printf("%c", a[i]);
		else
		{
			printf("%c", c);
			printf("%c", a[i]);
		}
	}
	printf("\n");
}

void Replace(char a[], int n, char b, char c)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == b)
			printf("%c", c);
		else
			printf("%c", a[i]);
	}
	printf("\n");
}


int main()
{
	int j, i = 0;
	char a, b, d, a1, a2, c[maxn];
	memset(c, 0, maxn);
	while((a = getchar()) != '.')
	{
		c[i] = a;
		i++;
	}
	c[i++] = '.';
	d = getchar();
	scanf("%c", &b);
	d = getchar();
/*	for(j = 0; j <= i; j ++)
	{
		printf("%c", c[j]);
	}*/
	switch(b)
	{
		case 'D': 
		{
			scanf("%c", &d);
			Delete(c, i, d);
			break;
		}
		case 'I':
		{
			scanf("%c %c", &a1, &a2);
			Insert(c, i, a1, a2);
			break;
		}
		case 'R':
		{
			scanf("%c %c", &a1, &a2);
			Replace(c, i, a1, a2);
			break;
		}
		break;
	}
	return 0;
} 
