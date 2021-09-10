#include <iostream>
#include <string.h>
#include "my_string.h"
using namespace std;

MyString& MyString::operator=(const MyString& b){
	str=b.str; }

MyString MyString::operator+(const MyString& b){
	string k=str+b.str;
	MyString ms;
	ms.str=k;
	return ms;}

MyString MyString::operator*(const int b){
	string k="";
	for(int i=0; i<b; i++){
		k+=str;}
	MyString ms;
	ms.str=k;
	return ms; }

ostream& operator<<(ostream& out, MyString&my_string){
	out<<my_string.str<<endl;
	return out; }

istream& operator>>(istream& in, MyString& my_string){
	in>>my_string.str;
	return in; }




