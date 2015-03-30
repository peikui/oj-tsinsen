#include<stdio.h>

int main()
{
	int a,bw,sw,gw;
	for(a = 100 ; a <= 999 ; a ++)
	{
		bw = a / 100;
		sw = a / 10 %10;
		gw = a % 10;
		if(bw * bw * bw + sw * sw * sw + gw * gw * gw == a)
			printf("%d\n", a);
	}
	return 0;
}