#pragma once
#include <vector>
using namespace std;
class Canvas {
	public:
	Canvas(size_t row, size_t col);
	~Canvas();
	
	void Resize(size_t w, size_t h);
	bool DrawPixel(int x, int y, char brush);
	void Print();
	void Clear();

	size_t giveR();
	size_t giveC();
	vector<string> giveCan();
	void getCan(vector<string> c);

	private:
	size_t row_;
	size_t col_;
	vector <string> can;

};

class Shape {
	public:
	virtual ~Shape();
	virtual void Draw(Canvas* canvas) {};
	virtual void print(){};
	protected:
	int x;
	int y;
	char b;

};

class Rectangle : public Shape { 
	public:
	Rectangle (int xx, int yy, int ww, int hh,char bb);
	virtual ~Rectangle();
	virtual void Draw(Canvas* canvas);
	virtual void print();
	protected:
	int w;
	int h;
};
class UpTriangle : public Shape { 
	public:
	UpTriangle (int xx,int yy,int hh,char bb);
	virtual ~UpTriangle();
	virtual void Draw(Canvas* canvas);
	virtual void print();
	protected:
	int h;
};
class DownTriangle : public Shape { 
	public:
	DownTriangle(int xx,int yy,int hh,char bb);
	virtual ~DownTriangle();
	virtual void Draw(Canvas* canvas);
	virtual void print();
	protected:
	int h;
};
class Diamond : public Shape {
	public:
	Diamond (int xx,int yy,int dd,char bb);
	virtual ~Diamond();
	virtual void Draw(Canvas* canvas);
	virtual void print();
	protected:
	int d;
};

