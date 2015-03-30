#include<stdio.h>

int main()
{
	int n,i,j;
	int array[34][34];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
				array[i][j]=1;
			else
				array[i][j]=array[i-1][j-1]+array[i-1][j];
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",array[i][j]);
		printf("\n");
	}
	return 0;
}
		
