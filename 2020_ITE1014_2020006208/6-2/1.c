#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	int t;
	for(t=1; t<10; t++)
	{
		printf("%d*%d=", num, t);
		printf("%d\n",num*t);
	}
	return 0;
}
