#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(string n,int a) { name=n; age=a; }
Animal::~Animal(){}

void  Zebra::printInfo(){
	cout<<"Zebra, Name: "<<name<<", Age: "<<age<<", Number of stripes: "<<numStripes<<endl; }

Zebra::Zebra(string n_, int a_, int ns) : Animal(n_,a_) {
	numStripes=ns; }
Zebra::~Zebra(){}

void  Cat::printInfo(){
	cout<<"Cat, Name: "<<name<<", Age: "<<age<<", Favorite toy: "<<favoriteToy<<endl;}

Cat::Cat(string q,  int w, string f) : Animal(q,w) {
	favoriteToy=f; }
Cat::~Cat(){}
