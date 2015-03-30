#include<stdio.h>
int main()
{
	int n , i , j, count = 0;
	int array[100];
	scanf( "%d" , &n );
	for(i = 0 ; i < n ; i++)
	{
		scanf( "%d" , &array[i] );
	}
	for( i = 0 ; i < n ; i++ )
		for( j = i + 1 ; j < n ; j ++ )
		{
			if( array[j] < array[i] )
				count ++;
		}
	printf("%d\n" , count);
	return 0;
}
				


