#include<stdio.h>

int main()
{
	int i,n;
	int a,max=-10000,min=10000;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		sum+=a;
		if(a>=max)
			max=a;
		if(a<=min)
			min=a;
	}
	printf("%d\n%d\n%d\n",max,min,sum);
	return 0;
}

