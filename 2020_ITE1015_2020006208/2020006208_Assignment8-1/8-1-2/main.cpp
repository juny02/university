#include <iostream>
#include "rect.h"
using namespace std;

int main () {
	while(1){
		string s;
		cin>>s;
		if (s=="quit") return 0;
		else if (s=="nonsquare"){
			int a,b;
			cin>>a>>b;
			NonSquare n(a,b);
			n.print();
			cout<<"Area: "<<n.getArea()<<endl;
			cout<<"Perimeter: "<<n.getPerimeter()<<endl;}
		else if (s=="square"){
			int a;
			cin>>a;
			Square n(a);
			n.print();
			cout<<"Area: "<<n.getArea()<<endl;
			cout<<"Perimeter: "<<n.getPerimeter()<<endl;}
	}}
