#include<stdio.h>

int main()
{
	int l,n,a,pmax,pmin,i,max=0,min=0;
	scanf("%d %d",&l,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		pmax=a>l+1-a?a:l+1-a;
		pmin=a<l+1-a?a:1+l-a;
		if(pmax>max)
		{
			max=pmax;
		}
		if(pmin>min)
		{
			min=pmin;
		}
	}
	printf("%d %d",min,max);
	return 0;	
} 
