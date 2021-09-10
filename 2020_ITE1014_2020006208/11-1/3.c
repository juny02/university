#include <stdio.h>
typedef struct
{
	int xpos;
	int ypos;
} Point;
Point getScale2xPoint(const Point* a)
{
	Point p;
	p.xpos=(*a).xpos * 2;
	p.ypos=(*a).ypos * 2;
	return p;
}

void main ()
{
	Point p1;
	scanf("%d %d", &p1.xpos, &p1.ypos);
	Point p2=getScale2xPoint(&p1);
	printf("%d %d\n", p2.xpos, p2.ypos);
}
