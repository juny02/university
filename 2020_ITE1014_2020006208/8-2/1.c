#include <stdio.h>
void printLine(int n)
{
	int num;
	for(int num=1; num<=n;num++)
	{
		printf("%d ", num);
	}
	printf("\n");
}
void main()
{
	int x;
	scanf("%d", &x);
	for (int num=1; num<=x; num++)
	{
		printLine(num);
	}
	for (int num=x; num>=1; num--)
	{
		printLine(num);
	}
}

