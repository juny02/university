#include "my_string2.h"
#include <iostream>
using namespace std;
int main (){
	string k;
	cin>>k;
	if (k=="new"){
		MyString2 a,b;
		cout<<"enter a"<<endl;
		cin>>a;
		cout<<"eneter b"<<endl;
		cin>>b;
		while(1){
			string q;
			cin>>q;
			if(q=="quit")
				return 0;
			else if (q=="a"){
				string w;
				cin>>w;
				if(w=="*"){
					int c;
					cin>>c;
					MyString2 result(a*c);
					cout<<result;
					}
				else if(w=="+"){
					string e;
					cin>>e;
					if(e=="a"){
					MyString2 result(a+a);
					cout<<result;}
					else if(e=="b"){
					MyString2 result(a+b);
					cout<<result;}}}	
			else if (q=="b"){
				string w;
				cin>>w;
				if(w=="*"){
					int c;
					cin>>c;
					MyString2 result(b*c);
					cout<<result;
					}
				else if(w=="+"){
					string e;
					cin>>e;
					if(e=="a") {
					MyString2 result(b+a);
					cout<<result;}
					else if(e=="b") {
					MyString2 result(b+b);
					cout<<result;}}}
		}
	}
}
				

