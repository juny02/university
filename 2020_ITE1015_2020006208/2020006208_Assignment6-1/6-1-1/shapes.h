#pragma once
class Circle {
	private:
	int x_, y_, r_;
	public:
	Circle(int x, int y, int r): x_(x), y_(y), r_(r)
	{}
	double cArea ();
	double cPeri ();
};
class Rectangle {
	private:
	int x1_, y1_, x2_, y2_;
	public:
	Rectangle(int x1, int y1, int x2, int y2): 
	x1_(x1), y1_(y1), x2_(x2), y2_(y2)
	{}
	int rArea ();
	int rPeri ();
};
      

