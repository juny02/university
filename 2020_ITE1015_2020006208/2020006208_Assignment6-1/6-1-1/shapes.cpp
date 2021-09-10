#include "shapes.h"
int Rectangle::rArea (){
	    return (x2_-x1_)*(y1_-y2_);
}
int Rectangle::rPeri (){
	    return 2*((x2_-x1_)+(y1_-y2_));
}
double Circle::cArea(){
	    double pi=3.14;
	    return r_*r_*pi;
}
double Circle::cPeri(){
	    double pi=3.14;
	    return 2*r_*pi;
}
