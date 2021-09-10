#include <iostream>
#include <vector>
#include "animal.h"
using namespace std;

int main (){
	string a;
	vector<Animal*> arr;
	while (1){
	cin>>a;
	if (a=="0") break;
	else if (a=="z"){
	string nn;
	int aa,s;
	cin>>nn>>aa>>s;
	Zebra* z=new Zebra(nn,aa,s);
	arr.push_back(z);}
	else if (a=="c"){
	string nn, ff;
	int aa;
	cin>>nn>>aa>>ff;
	Cat* c=new Cat(nn,aa,ff);
	arr.push_back(c);}
	}

	for (int i=0; i<arr.size();i++){
		arr[i]->printInfo();
		delete arr[i];}
	return 0;
}



