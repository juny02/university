
#include <stdio.h>

void swap (char** a)
{
	char* temp;
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
}
void printArray(char** arr, int len)
{
	printf("Array ");
	for (int i=0;i<len;i++)
		printf("[%d]: %s,",i,arr[i]);
	printf("\n");
}
void main()
{
	char* array [2] = {"aaa", "bbb"};
	printArray(array, sizeof(array)/sizeof(char*));
	swap(array);
	printArray(array, sizeof(array)/sizeof(char*));
}
