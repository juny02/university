#include <stdio.h>
void getSumDiff(int a, int b, int* pSum, int* pDiff)
{
	*pSum = a+b;
	*pDiff = a-b;
}
void main()
{
	int sum=0;
	int diff=0;
	int* pSum = &sum;
	int* pDiff = &diff;
	int a, b;
	scanf("%d %d", &a, &b);
	getSumDiff(a, b, pSum, pDiff);
	printf("sum: %d\n", sum);
	printf("diff: %d\n", diff);
}
