#include <stdio.h>
#define PI 3.141592
void main()
{
	double r;
	scanf("%lf", &r);
	printf("Perimeter: %f\n", r*2*PI);
	printf("Area: %f\n", PI*r*r);
}
