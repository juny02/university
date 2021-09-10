#include <iostream>
#include "number.h"
using namespace std;

int main ()
{
	string s;
	while(1){
	cin>>s;
	if (s=="quit") return 0;
	else{
	if (s=="number"){
		Number n;
	       	int num;
		cin>>num;
		n.setNumber(num);
		cout<<"getNumber(): "<<n.getNumber()<<endl;
	}
	else if (s=="square"){
		Square n;
		int num;
		cin>>num;
		n.setNumber(num);
		cout<<"getNumber(): "<<n.getNumber()<<endl;
		cout<<"getSquare(): "<<n.getSquare()<<endl;}
	else if (s=="cube"){
		Cube n;
		int num;
		cin>>num;
		n.setNumber(num);
		cout<<"getNumber(): "<<n.getNumber()<<endl;
		cout<<"getSquare(): "<<n.getSquare()<<endl;
		cout<<"getCube(): "<<n.getCube()<<endl;}
	}
	}
}


