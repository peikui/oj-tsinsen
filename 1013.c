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
	int i,j;
	long long sum=0;
	char array[8];
	scanf("%s",array);
	j=strlen(array);
	for(i=0;i<j;i++)
	{
		sum+=trans(array[i])*pow(16,j-i-1); 
	}
	printf("%I64d\n",sum);
	return 0;
}
