#include <stdio.h>
typedef struct
{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint (const Point* p){
	Point pp;
	pp.xpos=2*p->xpos;
	pp.ypos=2*p->ypos;
	return pp;
}

void swapPoints (Point* p1, Point* p2){
	int a,b;
	a=p1->xpos;
	p1->xpos=p2->xpos;
	b=p1->ypos;
	p1->ypos=p2->ypos;
	p2->xpos=a;
	p2->ypos=b;
}
int main (void){
	Point p1,p2;
	scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("Calling getScale2xPoint()\n");
	p2=getScale2xPoint(&p1);
	printf("p1 : %d %d\n",p1.xpos, p1.ypos);
	printf("p2 : %d %d\n", p2.xpos, p2.ypos);
	printf("Calling swapPoint()\n");
	swapPoints (&p1, &p2);
	printf("p1 : %d %d\n",p1.xpos, p1.ypos);
	printf("p2 : %d %d\n", p2.xpos, p2.ypos); 
	return 0;
}
