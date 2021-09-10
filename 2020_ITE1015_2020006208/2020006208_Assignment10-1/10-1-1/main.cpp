#include <iostream>
#include "shape.h"
#include <vector>
using namespace std;

int main () {
	string k;
	vector <Shape*> arr;
	while (1){
		cin>>k;
		if (k=="r"){
			int ww,hh;
			cin>>ww>>hh;
			arr.push_back(new Rectangle(ww,hh));}
		else if (k=="t"){
			int ww,hh;
			cin>>ww>>hh;
			arr.push_back(new Triangle(ww,hh));}
		else if (k=="0"){
			for (int i=0; i<arr.size(); i++){
				cout<<arr[i]->getArea()<<endl;
				delete arr[i];}
			return 0; }
	}
}
