#include<stdio.h>

const int maxn = 100005;

typedef struct{
	int x;
	int y;
	int distance ;
}point;

int PointDistance(point a, point b)
{
	return (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y);
}

int main()
{
	int n, i, maxa = 0, maxb = 0, equal = 0;
	point a, b, c[maxn];
	scanf("%d%d%d%d", &a.x, &a.y, &b.x, &b.y);
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &c[i].x, &c[i].y);
	}
	for(i = 0; i < n; i++)
	{
		if(PointDistance(a, c[i]) < PointDistance(b, c[i]))
		{
			c[i].distance = PointDistance(a, c[i]);
			if(c[i].distance > maxa)
				maxa = c[i].distance;
		}
		else if(PointDistance(a, c[i]) > PointDistance(b, c[i]))
		{
			c[i].distance = PointDistance(b, c[i]);
			if(c[i].distance > maxb)
				maxb = c[i].distance;
		}
		else
		{
			if(PointDistance(a, c[i]) > maxa && PointDistance(a, c[i]) > maxb)
				equal = PointDistance(a, c[i]);
		}	 
	}
	if(equal != 0)
	{
		if(maxa >= maxb)
			maxa = equal;
		else
			maxb = equal;		
	}
	printf("%d\n", maxa + maxb);
	return 0; 
} 
