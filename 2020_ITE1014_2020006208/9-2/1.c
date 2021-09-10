#include <stdio.h>
void main()
{
	int num [5];
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	int min, i, max, sum;
	min = num[0];
	max = num[0];
	sum =0 ;
	for(i=0;i<5;i++)
	{
		if (num[i]<=min)
			min = num[i] ;
		if (num[i]>=max)
			max = num [i];
		sum += num[i];
	}

	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("sum: %d\n", sum);

}

