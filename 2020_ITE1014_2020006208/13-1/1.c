#include <stdio.h>
#include <stdlib.h>
typedef struct
{ 
	int xpos;
	int ypos;
}Point;
void main()
{
	int s;
	Point* a = (Point*)malloc(sizeof(Point));
	scanf("%d %d",&s, &a->ypos);
	a->xpos=s;
	printf("%d %d\n", a->xpos, a->ypos);
	free(a);
}
