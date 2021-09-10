#include <stdio.h>
struct person
{
	char name[20];
	int age;
};
typedef struct person Person;

void main ()
{
	Person a;
	scanf("%s %d", a.name, &a.age);
	printf("name: %s\n", a.name);
	printf("age: %d\n", a.age);
}	
