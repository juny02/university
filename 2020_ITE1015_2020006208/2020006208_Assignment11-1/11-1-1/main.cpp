#include "my_string.h"
#include <iostream>
using namespace std;
int main (){
	string k;
	cin>>k;
	if (k=="new"){
		MyString a,b;
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
					MyString result=a*c;
					cout<<result;
					}
				else if(w=="+"){
					string e;
					cin>>e;
					if(e=="a"){
					MyString result=a+a;
					cout<<result;}
					else if(e=="b"){
					MyString result=a+b;
					cout<<result;}}}	
			else if (q=="b"){
				string w;
				cin>>w;
				if(w=="*"){
					int c;
					cin>>c;
					MyString result=b*c;
					cout<<result;
					}
				else if(w=="+"){
					string e;
					cin>>e;
					if(e=="a") {
					MyString result=b+a;
					cout<<result;}
					else if(e=="b") {
					MyString result=b+b;
					cout<<result;}}}
		}
	}
}
				

