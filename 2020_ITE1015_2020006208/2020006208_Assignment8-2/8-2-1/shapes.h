#pragma once
#include <iostream>
using namespace std;
class Shape {
	public:
		Shape();
		Shape(int x_, int y_, string b_);

		double GetArea(){};
		int GetPerimeter(){};
		void Draw(int canvas_width, int canvas_height) {};
		
	protected:
		int x;
		int y;
		string b;
};

class Rectangle :public Shape {
	public: 
		Rectangle();
		Rectangle(int x_, int y_, int w_,int h_, string b_);

		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);

	protected:
		int wid;
		int h;
		};

class Square : public Shape {
	public:
		Square();
		Square(int x_, int y_,int l_, string b_);
		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);

	protected: 
		int len;
};
class Diamond : public Shape {
	public:
		Diamond();
		Diamond(int x_, int y_,int d_, string b_);

		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);
	protected:
		int d;
};
