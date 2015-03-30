#include<stdio.h>

int main()
{
	char array[25][25];
	int k = 0 , i = 0 , j = 0;
	char zf = 'A';
	for(k  =0 ; k < 25 ; k++)
	{
		i = k;
		j = 0;
		do
		{
			if(i<25&&j<18)
			{
				array[i][j]=zf;
				array[j][i]=zf;
			}
			i++;
			j++;
		}while(i < 25&&j < 25);
		zf++;
	}
	for(i = 0;i < 25;i++)
	{
		for(j = 0;j < 18;j++)
		{
			printf("%c",array[i][j]);
			if(j / 17 == 1)
				printf("\n");
		}
	}
	return 0;
}
