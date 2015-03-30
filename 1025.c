#include<stdio.h>
#include<string.h>

int main()
{
	char a[30],b[30];
	scanf("%s%s",a,b);
	if(strlen(a)!=strlen(b))
		printf("1\n");
	else if(strcmp(a,b)==0)
		printf("2\n");
	else if(strnicmp(a,b,30)==0)
		printf("3\n");
	else
		printf("4\n");
	return 0;
}
