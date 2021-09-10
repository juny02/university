#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b && a>=c)
		printf("max: %d\n",a);
	else if(b>=a && b>=c)
	        printf("max: %d\n", b);
	else if (c>=a && c>=b)
		printf("max: %d\n", c);

	if(a<=b && a<=b)
		printf("min: %d\n", a);
	else if(b<=a && b<=c)
		printf("min: %d\n", b);
	else
		printf("min: %d\n", c);
	return 0;
}
