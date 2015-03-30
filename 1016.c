#include<stdio.h>
#define Pi 3.14159

int main()
{
	int n,i;
	float x,y,r2;
	scanf("%d",&n);
	while(n--)
	{
		i=0;
		scanf("%f %f",&x,&y);
		r2=x*x+y*y;
		while(Pi*r2>=100*i)
		{
			i++;
		}
		printf("%d\n",i);
	}
	return 0;
}

