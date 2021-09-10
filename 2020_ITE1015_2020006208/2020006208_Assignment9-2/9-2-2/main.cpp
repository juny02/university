#include <iostream>
#include "canvas.h"
#include <vector>
using namespace std;

int main () {
	int a,b;
	cin>>a>>b;
	Canvas c (b,a);
	c.Clear();
	c.Print();
	vector <Shape*> arr;
	while (1){
		string s;
		cin>>s;
		if (s=="quit") return 0;
		else if (s=="add"){
			string shape;
			cin>>shape;
			if (shape=="rect"){
			int x_,y_,w_,h_;
			char b_;
			cin>>x_>>y_>>w_>>h_>>b_;
			Rectangle* rect= new Rectangle(x_,y_,w_,h_,b_);
			arr.push_back(rect);}
			else if (shape=="diamond"){
			int x_,y_,d_;
			char b_;
			cin>>x_>>y_>>d_>>b_;
			Diamond* dia=new Diamond(x_,y_,d_,b_);
			arr.push_back(dia);}
			else if (shape=="tri_up"){
			int x_,y_,h_;
			char b_;
			cin>>x_>>y_>>h_>>b_;
			UpTriangle* upt=new UpTriangle(x_,y_,h_,b_);
			arr.push_back(upt);}
			else if (shape=="tri_down"){
			int x_,y_,h_;
			char b_;
			cin>>x_>>y_>>h_>>b_;
			DownTriangle* dt=new DownTriangle(x_,y_,h_,b_);
			arr.push_back(dt);}}
		else if (s=="delete"){
			int index;
			cin>>index;
			if (index<arr.size()) arr.erase(arr.begin()+index);}
		else if (s=="draw"){
			c.Clear();
			for (int i=0; i<arr.size();i++){
				arr[i]->Draw(&c); }
			c.Print(); }
		else if (s=="dump"){
			for (int i=0; i<arr.size();i++){
				cout<<i;
				arr[i]->print();}}
		else if (s=="resize"){
			int q,w;
			cin>>q>>w;
			c.Resize(q,w);}
		
		}
	for (int i=0; i<arr.size();i++) delete arr[i];

}



