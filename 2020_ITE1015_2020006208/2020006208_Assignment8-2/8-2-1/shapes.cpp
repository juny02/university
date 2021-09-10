#include <iostream>
#include <string>
#include "shapes.h"
using namespace std;

Shape::Shape(){	x=0; y=0; b=' '; }
Shape::Shape(int x_, int y_, string b_){ x=x_; y=y_; b=b_;}

Rectangle::Rectangle() {wid=0; h=0;}
Rectangle::Rectangle(int x_, int y_,int w_,int h_, string b_ ) {
	x=x_; y=y_; b=b_; wid=w_; h=h_;}

double Rectangle::GetArea(){return wid*h; }
int Rectangle::GetPerimeter(){return 2*(wid+h);}
void Rectangle::Draw(int canvas_width, int canvas_height){
	cout<<" ";
	string can="", blank1="", rec="", blank2="";
	for(int i=0; i<canvas_width; i++){
		cout<<i;
		can+=".";
	}
	cout<<endl;
	for (int i=0; i<y; i++) cout<<i<<can<<endl;
	for(int i=0; i<x;i++) blank1+=".";
	for(int i=0; i<wid && x+i<canvas_width; i++) rec+=b;
	for (int i=0; i<canvas_width-(x+wid)&&x+i+wid-1<canvas_width; i++) blank2+=".";

	for(int i=y; i<y+h;i++) cout<<i<<blank1<<rec<<blank2<<endl;
	for (int i=y+h; i<canvas_height;i++) cout<<i<<can<<endl;
}


Square::Square() {len=0;}
Square::Square(int x_, int y_,int l_, string b_){
	x=x_; y=y_; b=b_; len=l_;}
void Square::Draw(int canvas_width, int canvas_height){
	string can="", blank1="", squ="", blank2="";
	cout<<" ";
	for(int i=0; i<canvas_width; i++){
		cout<<i;
		can+=".";}
	cout<<endl;
	for (int i=0; i<y; i++) cout<<i<<can<<endl;
	for(int i=0; i<x;i++) blank1+=".";
		for(int i=0; i<len &&x+i<canvas_width; i++) squ+=b;
		for (int i=0; i<canvas_width-(x+len)&&x+i+len-1<canvas_width; i++) blank2+=".";
	for(int i=y; i<y+len&&i<canvas_height;i++) cout<<i<<blank1<<squ<<blank2<<endl;
	for (int i=y+len; i<canvas_height;i++) cout<<i<<can<<endl;}
double Square::GetArea() {return len*len; }
int Square::GetPerimeter(){return 4*len; }

Diamond::Diamond() {d=0;}
Diamond::Diamond(int x_, int y_,int d_, string b_){
	x=x_; y=y_; b=b_; d=d_;}

double Diamond::GetArea(){return (2*d+1)*(2*d+1)/2.0; }
int  Diamond::GetPerimeter(){return 4*(d+1); }
void Diamond::Draw(int canvas_width, int canvas_height){
	cout<<" ";
	string can="";
	for(int i=0; i<canvas_width; i++){
		cout<<i;
		can+=".";}
	cout<<endl;
	for (int i=0; i<y; i++) cout<<i<<can<<endl;
	int yy=y;
	for (int i=0; i<d+1;i++) {
		cout<<yy++;
		for (int a=0; a<x-i;a++) cout<<".";
		for (int a=0; a<2*i+1;a++) cout<<b;
		for (int a=0; a<canvas_width-x-1-i;a++) cout<<".";
		cout<<endl;
	}
	for (int i=d-1; i>0 || i==0;i--){
		cout<<yy++;
		for (int a=0; a<x-i;a++) cout<<".";
		for (int a=0; a<2*i+1;a++) cout<<b;
		for (int a=0; a<canvas_width-x-1-i;a++) cout<<".";
		cout<<endl;
	}
	for (int i=y+2*d+1; i<canvas_height; i++)
		cout<<i<<can<<endl;
}

		







