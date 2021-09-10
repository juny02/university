#include <stdio.h>
int cc(int a, int b)
{
	if (b==0)
	{
		return 1;
	}
	else if (a==b)
	{
		return 1;
	}
	else
	{
		return cc(a-1, b-1) + cc(a-1, b);
	}
}
void main ()
{
	int x,y;
	scanf("%d %d", &x, &y);
	printf("%d\n", cc(x,y));
}
