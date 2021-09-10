#include <stdio.h>
typedef struct
{
	char name[7];
	int score;
} Person;
void printScoreStars(Person* persons, int len)
{
	for(int i=0; i<3; i++)
	{
		printf("%-6s", persons[i].name);
		for (int a=0; a<persons[i].score/len; a++)
			printf("*");
		printf("\n");
	}
}
void main ()
{
	Person a [3];
	for(int i=0; i<3; i++)
		scanf("%s %d", a[i].name, &a[i].score);
		printScoreStars(a, 5);
}
	
