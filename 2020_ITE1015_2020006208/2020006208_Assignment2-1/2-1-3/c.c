#include <stdio.h>
void rotateLeft (int* pa, int* pb, int* pc){
	int k;
	k=*pa;
	*pa=*pb;
	*pb=*pc;
	*pc=k;
}

void rotateRight (int* pa, int* pb, int* pc){
	int k;
	k=*pc;
	*pc=*pb;
	*pb=*pa;
	*pa=k;

}
int main(void){
	int a=10, b=20, c=30;
	printf("%d:%d:%d\n", a,b,c);
	int k;
	while (1)
	{
		scanf("%d", &k);
		if (k==1)
			rotateLeft(&a, &b, &c);
		else if (k==2)
			rotateRight(&a,&b,&c);
		else
			break;
		printf("%d:%d:%d\n", a,b,c);
	}

	return 0;
}
