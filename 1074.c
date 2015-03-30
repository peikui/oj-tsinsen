#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j;
	int a[100][100];
	int b[100],c[100];
	memset(c,0,sizeof(c));
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			c[i]+=a[i][j]*b[j];
	for(i=0;i<n;i++)
		printf("%d\n",c[i]);
	return 0;
}

