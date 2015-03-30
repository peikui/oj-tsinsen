#include<stdio.h>

int main()
{
	int n,i,check;
	int array[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&check);
	i=0;
	while(i<n&&check!=array[i])
	{
		i++;
	}
	if(i==n)
		printf("-1");
	else
		printf("%d\n",i+1);
	return 0;
}

