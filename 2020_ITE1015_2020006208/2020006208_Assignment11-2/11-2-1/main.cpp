#include <iostream>
#include <string>
#include "my_vector.h"
using namespace std;

int main (){
	string s;
	cin>>s;
	if (s=="new"){
		int k;
		cin>>k;
		MyVector a(k);
		MyVector b(k);
		cout<<"enter a"<<endl;
		cin>>a;
		cout<<"enter b"<<endl;
		cin>>b;
		string q,w,e;
		while(1){
		cin>>q;
		if (q=="quit") return 0;
		else if(q=="a"){
			cin>>w>>e;
			if(w=="+"){
			       if(e=="a"){
				MyVector c(k);
			        c=a+a;
			        cout<<c;}
		      		else if(e=="b"){
			 	MyVector c(k);
				c=a+b;
				cout<<c;}
				else{
				MyVector c(k);
				int i=stoi(e);
				c=a+i;
				cout<<c;}}
			else if(w=="-"){
				if(e=="a"){	
				MyVector c(k);				                              c=a-a;				                                    cout<<c;}
				else if(e=="b"){
				MyVector c(k);
				c=a-b;
				cout<<c;}
				else{
				MyVector c(k); 
				c=a-stoi(e); 
				cout<<c;}}}
		else if(q=="b"){
			cin>>w>>e;
			if(w=="+"){
				if(e=="a"){
				MyVector c(k);
				c=b+a;
				cout<<c;}
				else if(e=="b"){
				MyVector c(k);
				c=b+b;
				cout<<c;}
				else{
				MyVector c(k);
				c=b+stoi(e);
				cout<<c;}}
			else if(w=="-"){
				if(e=="a"){
				MyVector c(k); 
				c=b-a;
				cout<<c;}
				else if(e=="b"){
				MyVector c(k);
				c=b-b;
				cout<<c;}
				else { 
				MyVector c(k); 
				c=b-stoi(e); 
				cout<<c;}}}
		}
	}
}




