#include<stdio.h>

int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
			{
				if(2*a+2*b+c==n)
					printf("%d\n",a*10001+b*1010+c*100);
			}

	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
			{
				if(2*a+2*b+2*c==n)
					printf("%d\n",a*100001+b*10010+c*1100);
			}
	return 0;
}