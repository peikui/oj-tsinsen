#include<stdio.h>
#include<string.h>
#include<math.h>


int trans(char a)
{
	if(a>='A')
		return a-'A'+10;
	else
		return a-'0';
}

int main()
{
	int n,i,j;
//	int  ys,bcs,sum;
	int sum;
	char array[1000000];
//	int  b[200];
	scanf("%d",&n);
	while(n--)
	{
		sum=0;
		scanf("%s",array);
		j=strlen(array);
		for(i=0;i<j;i++)
		{
			sum+=trans(array[i])*pow(16,j-i-1); 
		}
		printf("%o\n",sum);
/*		bcs=sum;
		i=0;
		while(bcs)
		{
			ys=bcs%8;
			bcs/=8;
			b[i]=ys;
			i++;
		}
		if(sum==0)
			printf("0");
		else
			for(i--;i>=0;i--)
				printf("%d",b[i]);
		printf("\n");*/
	}
		return 0;
}

