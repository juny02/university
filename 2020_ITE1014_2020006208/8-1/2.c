#include <stdio.h>
int addTotal (int a)
{ 
	int A, num;
	A=0;
	for(num=1 ; num<a+1 ; num++)
	{
		A += num;
	}
	return A;
}
int gMul=1;	
void mulTotal (int a)
{
	int num;
	for(num=1 ; num<a+1 ; num++)
	{
		gMul*=num;
	}
}
	


void main ()
{
	int x;
	scanf ("%d", &x);
	printf("addTotal(): %d\n", addTotal(x));
	mulTotal(x);
	printf("gMul: %d\n", gMul);
	return;
}

