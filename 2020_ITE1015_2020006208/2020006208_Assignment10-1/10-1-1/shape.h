#pragma once
class Shape {
	public:
	Shape (double width,double height);
	virtual double getArea()=0;
	virtual ~Shape() {}
	protected:
	double w;
	double h;
};

class Triangle : public Shape 
{
	public:
	Triangle (double width,double height);
	virtual double getArea();
	virtual ~Triangle(){}
};

class Rectangle : public Shape
{
	public:
	Rectangle (double width,double height);
	virtual double getArea();
	virtual ~Rectangle(){}
};

