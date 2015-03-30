#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	double count=0;
	char s[1005];
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='C'||s[i]=='G')
		{
			count++;
		}
	}
	printf("%d",(int)(count/strlen(s)*100+0.5));
	return 0;
} 
