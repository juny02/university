#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i;
	scanf("%d", &i);
	int* num=(int*)malloc(i*sizeof(int));
	for (int k=0; k<i;k++)
		scanf("%d", num+k);
	int min=num[0], max=num[0];
	for (int k=1; k<i; k++)
	{
		if (num[k]<min)
			min=num[k];
		if (num[k]>max)
			max=num[k];
	}
	printf("%d %d\n", min, max);
	free(num);
}

