#include "intset.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main ()
{
	IntegerSet is;
	while (1){
		string a;
		cin>>a;
		if(a=="add"){
			int k;
			cin>>k;
			is.AddNumber(k);}
		else if(a=="del"){
			int k;
			cin>>k;
			is.DeleteNumber(k);
		}
		else if (a=="get"){
			int k;
			cin>>k;
			cout<<is.GetItem(k)<<endl;}
		else if (a=="quit")
			return 0;
	}
}
			
