#include <iostream>
#include "my_string2.h"
using namespace std;

MyString2 MyString2::operator+(const MyString2& b){
	        string k=str+b.str;
		MyString2 ms;
		ms.str=k;
		return ms;}

MyString2 MyString2::operator*(const int b){
	        string k="";
	        for(int i=0; i<b; i++){
                k+=str;}
	        MyString2 ms;
	        ms.str=k;
	        return ms; }

ostream& operator<<(ostream& out, MyString2&my_string){
	        out<<my_string.str<<endl;
	        return out; }

istream& operator>>(istream& in, MyString2& my_string){
	        in>>my_string.str;
	        return in; }
