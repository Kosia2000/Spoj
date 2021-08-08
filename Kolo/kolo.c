#include <stdio.h>
#include <math.h>
#define PI 3.141592654

double kolo(double r, double d)
{
	double S;
	double half;
	half = d/2;

	double x = sqrt((r * r) - (half * half));
	
	S = PI * x * x;
	return S;
}

int main()
{
	double d;
	double r;
	
	scanf("%lf %lf", &r, &d);
	printf("%.2f\n", kolo(r, d));
	return 0;
}
