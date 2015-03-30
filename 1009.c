#include<stdio.h>

int main()
{
	int n,a,sum=0;
	int max=-1000,max2=-1000,min=1000,min2=1000;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(a>max)
		{
			max2=max;
			max=a;
		}
		else if(a>max2)
			max2=a;
		if(a<min)
		{
			min2=min;
			min=a;
		}
		else if(a<min2)
			min2=a;
		sum+=a*a;
	}
	printf("%d\n%d\n%d\n",max2,min2,sum);
	return 0;
}