#include<stdio.h>
#include<math.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	char array[n][m];
	int i,j,a;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			a=abs(i-j);
			array[i][j]='A'+a;
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%c",array[i][j]);
		printf("\n");
	}
	return 0;
}
