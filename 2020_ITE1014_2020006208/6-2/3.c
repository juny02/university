#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n<-10)
	{
		printf("n < %d\n", -10);
	}
	else if(n>=-10 && n<0)
	{
		printf("%d <= n < %d\n", -10, 0);
	}
	else if(n>=0 && n<10)
	{
		printf("%d <= n < %d\n", 0, 10);
	}
	else if(n>=10)
	{
		printf("n >= %d\n", 10);
	}
	return 0;
}

