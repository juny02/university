#include <stdio.h>
int main()
{
	double a=1.23456789, b=0.0000123456789;
	printf("%d) %.10f %.10f\n",1, a, b);
	printf("%d) %e %e\n",2,a,b);
	printf("%d) %E %E\n", 3,a,b);
	printf("%d) %g %g\n", 4,a,b);	
	printf("%d) %G %G\n", 5,a,b);
	return 0;
}
