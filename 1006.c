#include<stdio.h>

int main()
{
	int a , b;
	for(a = 1 ; a <= 9 ; a ++)
		for(b = 0 ; b <= 9 ; b ++)
			printf("%d\n", a * 1001 + b * 110);
	return 0;
}

