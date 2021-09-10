#include <iostream>
#include "my_vector.h"
using namespace std;

MyVector::MyVector(){ length=0; a=NULL; }
MyVector::MyVector(int length){ this->length=length; 
	a=new double[length]; }
MyVector::~MyVector(){delete[] a;};

MyVector& MyVector::operator=(const MyVector& b){
	for(int i=0; i<length; i++){ a[i]=*(b.a + i); }
	return *this;}
MyVector MyVector::operator+(const MyVector& b){
	MyVector mv(length);
	for(int i=0; i<length; i++){ mv.a[i]=*(a+i) + *(b.a + i);}
	return mv;}
MyVector MyVector::operator-(const MyVector& b){
	MyVector mv(length);
	for(int i=0; i<length; i++){ mv.a[i]=*(a+i) - *(b.a + i);}
	return mv;}
MyVector MyVector::operator+(const int b){
	MyVector mv(length);
	for(int i=0; i<length; i++){ mv.a[i]=*(a+i)+b; }
	return mv;}
MyVector MyVector::operator-(const int b){
	MyVector mv(length);
	for(int i=0; i<length; i++){ mv.a[i]=*(a+i)-b; }
	return mv;}

ostream& operator<< (ostream& out, MyVector& b){
	for(int i=0; i<b.length; i++){ out<<*(b.a+i)<<" "; }
	out<<endl;
	return out; }
istream& operator>> (istream& in, MyVector& b){
	for(int i=0; i<b.length; i++) { in>>*(b.a+i); } 
	return in; }










