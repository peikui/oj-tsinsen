#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int M,N,i,j,k;
		int array[10000];
		scanf("%d %d",&N,&M);
		for(i=0;i<N;i++)
			scanf("%d",&array[i]);
		while(M--)
		{
			int temp;
			scanf("%d %d",&j,&k);
			temp=array[j-1];
			array[j-1]=array[k-1];
			array[k-1]=temp;
		}
		for(i=0;i<N;i++)
			printf("%d\n",array[i]);
	}
	return 0;
}

