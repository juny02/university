#include <stdio.h>
int recursive(int a)
{
	if(a==1)
		return 1;
	else
		return a+recursive(a-1);
}
void main()
{
	int x;
	scanf("%d", &x);
	printf("%d\n", recursive(x));
	return;
}
