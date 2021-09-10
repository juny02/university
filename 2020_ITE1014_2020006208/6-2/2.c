#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d",&num);
	int a=0;
	while (a<num)
	{
		int b=0;
		while(b<a+1)
		{
			printf("*");
			b=b+1;
		}
		a=a+1;
		printf("\n");
	}
	return 0;
}
		
