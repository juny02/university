#include <stdio.h>
void main ()
{
	int num [5];
	scanf("%d %d %d %d %d", &*(num), &*(num+1), &*(num+2), &*(num+3), &*(num+4));
	int a=*(num);
	int b=*(num+1);
	int c=*(num+3);
	int d=*(num+4);
	*(num)=d;
	*(num+1)=c;
	*(num+3)=b;
	*(num+4)=a;
	int i;
	for (i=0;i<5;i++)
		printf("%d ", *(num+i));
	printf("\n");
}
