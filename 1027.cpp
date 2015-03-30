#include<stdio.h>
#include<string.h>

char s1[23],s2[23],s3[23],equal[23];

void f1()
{
	int i=0;
	while(s1[i]==s2[i]&&i<strlen(s1))
	{
		i++;
	}
	if(i==strlen(s1)&&i==strlen(s2))
	{
		strcpy(equal,s1);
	}
}

void f2()
{
	int i=0,j=0;
	while(s1[i]==s2[j]&&i<strlen(s1))
	{
		i++,j++;
	}
	if(i==strlen(s1)-1&&s2[j]==0)
	{
		strcpy(s3,s2);
	}
	else if(i<strlen(s1))
	{
		i++;
		while(s1[i]==s2[j]&&i<strlen(s1)+1)
		{
			i++,j++;
		}
		if(i==strlen(s1)+1&&j==strlen(s2)+1)
		{
			strcpy(s3,s2);
		}
	}
}

void f3()
{
	int i=0,j=0;
	while(s1[i]==s2[j]&&j<strlen(s2))
	{
		i++,j++;
	}
	if(j==strlen(s2)-1&&s1[i]==0)
	{
		strcpy(s3,s2);
	}
	else if(j<strlen(s2))
	{
		j++;
		while(s2[j]==s1[i]&&j<strlen(s2)+1)
		{
			i++,j++;
		}
		if(i==strlen(s1)+1&&j==strlen(s2)+1)
		{
			strcpy(s3,s2);
		}
	}
}

void f4()
{
	int i=0,j=0;
	while(s1[i]==s2[j]&&j<strlen(s2))
	{
		i++,j++;
	}
	if(j==strlen(s2)-1&&i==strlen(s1)-1)
	{
		strcpy(s3,s2);
	}
	else if(j<strlen(s2))
	{
		i++,j++;
		while(s2[j]==s1[i]&&j<strlen(s2))
		{
			i++,j++;
		}
		if(i==strlen(s1)&&j==strlen(s2))
		{
			strcpy(s3,s2);
		}
	}
}



int main()
{
	memset(s1,0,sizeof(char)*23);
	memset(s2,0,sizeof(char)*23);
	memset(s3,0,sizeof(char)*23);
	memset(equal,0,sizeof(char)*23);
	int n,i;
	scanf("%s",&s1);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s2);
		while(equal[0]==0)
		{		
			f1();
			while(s3[0]==0)
			{
				f2();
				f3();
				f4();
				break;
			}
			break;
		}
	}
	if(equal[0]!=0)
	{
		for(i=0;i<strlen(s1);i++)
		{
			printf("%c",s1[i]);
		}
		printf("\n");
	}
	else if(s3[0]!=0)
	{
		for(i=0;i<strlen(s3);i++)
		{
			printf("%c",s3[i]);
		}
		printf("\n");
	}
	else 
	{
		printf("NOANSWER\n");
	}
	return 0;
} 
