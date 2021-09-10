#include<stdio.h>
void main()
{
	int arr [3][2];
	for (int i=0; i<3; i++)
	{
		for (int a=0; a<2; a++)
			scanf("%d", &arr[i][a]);
	}
	for (int i=0; i<3; i++)
	{
		for (int a=0; a<2; a++)
			printf("%d ", arr[i][a]);
		printf("\n");
	}
}
