#include<stdio.h>
void trans(int a)
{
	if(a>=10)
		printf("%c",'A'+a-10);
	else
		printf("%d",a);
}

int main()
{
	int a,bcs,ys,i=0;
	int array[8];
	scanf("%d",&a);
	bcs=a;
	while(bcs)
	{
		ys=bcs%16;
		bcs/=16;
		array[i]=ys;
		i++;
	}
	if(a==0)
		trans(0);
	for(i=i-1;i>=0;i--)
		trans(array[i]);
	printf("\n");
	return 0;
}

