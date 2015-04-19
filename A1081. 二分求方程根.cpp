#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;

double getRoot(double (*f)(double), double a, double b)
{
	double x = (a + b) / 2;
	while(fabs(f(x)) >= 1e-6)
	{
		if(f(x) * f(a) > 0)
		{
			a = x;
		}
		else
		{
			b = x;
		}
		x = (a + b) / 2;
	}
	return x;	
}

