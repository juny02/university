#include <stdio.h>
void main ()
{
	int i;
	double d;
	char c;
	scanf("%d %lf %c", &i, &d, &c);
	printf("i: %d, %p\n", i, &i);
	printf("d: %f, %p\n", d, &d);
	printf("c: %c, %p\n", c, &c);
	printf(" \n");

	int* pi = &i;
	double* pd = &d;
	char* pc = &c;
	(*pi)+=1;
	(*pd)+=1;
	(*pc)+=1;
	printf("i+%d: %d\n", 1, i);
	printf("d+%d: %f\n", 1, d);
	printf("c+%d: %c\n", 1, c);
	printf(" \n");

	printf("size of pi: %ld\n", sizeof(pi));
	printf("size of pd: %ld\n", sizeof(pd));
	printf("size of pc: %ld\n", sizeof(pc));
}
