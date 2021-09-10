#include <stdio.h>
typedef struct
{
	char name[11];
	int age;
}Person;

void main ()
{
	Person arr[3];
	for (int i=0; i<3; i++)
	{
		scanf("%s %d", arr[i].name, &arr[i].age);
	}
	for (int i=0; i<3; i++)
	{
		printf("Name:%s, Age:%d\n", arr[i].name, arr[i].age);
	}
}
