#include<stdio.h>

int main()
{
	int array[6]={0,0,0,0,0,0};
	int k,i,jw=0,j=5,count=0;
	for(k=1;k<=64;k++)
	{
		for(i=0,count=0;i<6;i++)
		{
			if(array[i]==1)
				count++;
		}
		if(count%2==1)
		{
			for(i=0;i<6;i++)
				printf("%d",array[i]);
			printf("\n");
		}
		array[5]+=1;
		for(i=5;i>=1;i--)
		{
			if(array[i]==2)
			{	
				array[i]=0;
				jw=1;
				array[i-1]+=jw;
			}
		}
	}
	return 0;
}