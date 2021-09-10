#include <stdio.h>
void square (double* a)
{
	*a *= *a;
}
void main()
{
	double dvar;
	scanf("%lf", &dvar);
	double* var = &dvar;
	square(var);
	printf("%f\n", dvar);
}
