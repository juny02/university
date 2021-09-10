#include <iostream>
#include <string>
#include "shapes.h"
using namespace std;

int main ()
{
	int q,w;
	cin>>q>>w;
	while(1){
	string str;
	cin>>str;
	if (str=="quit") return 0;
	else if(str=="rect"){
		int x_,y_,w_,h_;
		string b_;
		cin>>x_>>y_>>w_>>h_>>b_;
		Rectangle rectangle(x_,y_,w_,h_,b_);
		cout<<"Area: "<<rectangle.GetArea()<<endl;
		cout<<"Perimeter: "<<rectangle.GetPerimeter()<<endl;
		rectangle.Draw(q,w);
	}
	else if(str=="square"){
		int x_,y_,l_;
		string b_;
		cin>>x_>>y_>>l_>>b_;
		Square sq(x_,y_,l_,b_);
		cout<<"Area: "<<sq.GetArea()<<endl;
		cout<<"Perimeter: "<<sq.GetPerimeter()<<endl;
		sq.Draw(q,w);
	}
	else if (str=="diamond"){
		int x_,y_,d_;
		string b_;
		cin>>x_>>y_>>d_>>b_;
		Diamond dia(x_,y_,d_,b_);
		cout<<"Area: "<<dia.GetArea()<<endl;
		cout<<"Perimeter: "<<dia.GetPerimeter()<<endl;
		dia.Draw(q,w);
	}

}
}
