#include<stdio.h>
int main()
{
	int array[200];
	int n,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[i])
			{
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",array[i]);
	return 0;
}



	