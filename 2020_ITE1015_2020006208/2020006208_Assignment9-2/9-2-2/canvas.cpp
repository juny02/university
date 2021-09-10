#include <iostream>
#include <vector>
#include "canvas.h"
using namespace std;

Canvas::Canvas(size_t row, size_t col){ row_=row; col_=col; }
Canvas::~Canvas(){}
size_t Canvas::giveR(){ return row_; }
size_t Canvas::giveC(){ return col_; }
vector<string> Canvas::giveCan() { return can; }
void Canvas::getCan(vector<string> c) {can=c;}
void Canvas::Resize(size_t w, size_t h){ row_=h; col_=w; }
bool Canvas::DrawPixel(int x, int y, char brush){
	if (x<0 || y>row_)
		return false;
	else
		return true;
}
void Canvas::Clear(){
	string c="";
	for (int i=0; i<col_;i++){
		c+=".";}
	vector<string> v(row_, c);
	can=v;
}
void Canvas::Print(){
	cout<<" ";
	for(int i=0; i<col_;i++){
		if(i>9){ cout<<i-10; }
		else { cout<<i; }}
	cout<<endl;
	for (int i=0; i<row_; i++){
		if(i>9){ cout<<i-10; }
		else { cout<<i; }
		cout<<can[i]<<endl;}
}




Shape::~Shape(){}

Rectangle::Rectangle (int xx,int yy,int ww,int hh,char bb){
	x=xx; y=yy; b=bb; w=ww;h=hh; }
Rectangle::~Rectangle(){}
void Rectangle::Draw(Canvas* canvas){
	if(canvas->DrawPixel(x,y,b)){
	vector<string>C;
	C=canvas->giveCan();
	for (int i=y; i<y+h && i<canvas->giveR(); i++){
		for (int j=x; j<x+w && j<canvas->giveC(); j++){
			C[i][j]=b;}}
	canvas->getCan(C);}
}

void Rectangle::print(){ cout<<" rect "<<x<<" "<<y<<" "<<w<<" "<<h<<" "<<b<<endl;}

UpTriangle::UpTriangle(int xx,int yy,int hh,char bb){ x=xx; y=yy; h=hh; b=bb; }
UpTriangle::~UpTriangle(){}
void UpTriangle::Draw(Canvas* canvas){
	if(canvas->DrawPixel(x,y,b)){
	vector<string> c=canvas->giveCan();
	int z=x;
	for (int i=0; i<h&&i+y<canvas->giveR(); i++){
		for (int j=0; j<2*i+1; j++){
			if(j+z<canvas->giveC()&&j+z>-1)
			c[i+y][j+z]=b;}
		z-=1;}
	canvas->getCan(c);}
}

void UpTriangle::print(){ cout<<" tri_up "<<x<<" "<<y<<" "<<h<<" "<<b<<endl;}

DownTriangle::DownTriangle(int xx,int yy,int hh,char bb) { x=xx; y=yy; h=hh; b=bb; }
DownTriangle::~DownTriangle(){}
void DownTriangle::Draw(Canvas* canvas){
	if(canvas->DrawPixel(x,y,b)){
	vector<string> c=canvas->giveCan();
	int xx=x-h+1;
	int yy=y-h+1;
	int hh=h-1;
	for (int i=0;i<h&&yy+i>-1;i++){
		for (int j=0; j<2*hh+1;j++){
			if(xx+j>-1&&xx+j<canvas->giveC())
			c[yy+i][xx+j]=b;}
		xx+=1;
		hh-=1;
	}
	canvas->getCan(c);}
}
void DownTriangle::print(){ cout<<" tri_down "<<x<<" "<<y<<" "<<h<<" "<<b<<endl;}

Diamond::Diamond (int xx,int yy,int dd,char bb) { x=xx; y=yy; d=dd; b=bb; }
Diamond::~Diamond(){}
void Diamond::Draw(Canvas* canvas){
	if(canvas->DrawPixel(x,y,b)){
	int yy=y;
	int xx=x;
	vector<string> c=canvas->giveCan();
	for (int k=0;k<d+1&&yy<canvas->giveR();k++){
		for(int i=0; i<2*k+1;i++){
			if (xx+i-k>-1&&xx+i-k<canvas->giveC())
			c[yy][xx+i-k]=b;}
		yy+=1;}

	for (int k=d-1; k>-1&&yy<canvas->giveR() ; k--){
		for (int i=0; i<2*k+1;i++){
			if(xx+i-k>-1&&xx+i-k<canvas->giveC())
			c[yy][xx+i-k]=b;}
		yy++;} 
	canvas->getCan(c);}
}
void Diamond::print(){ cout<<" diamond "<<x<<" "<<y<<" "<<d<<" "<<b<<endl;}



