#include <stdio.h>
void main ()
{
	double arr [5];
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	double* parr = arr;
	double sum = 0;
	int i;
	for(i=0;i<5;i++)
	{
		*(parr+i) *=2;
		printf("%f\n", *(parr+i));
		sum +=*(parr+i);
	}
	
	printf("sum: %f\n", sum);
}
