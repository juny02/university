#include <iostream>
#include <set>
#include <string>
#include "setfunc.h"
using namespace std;

int main (){
	while (1){
	string s;
	getline(cin,s);
	if (s=="0")
		return 0;
	else{
	int z;
	int len= s.length();
	for (z=0; z < len ;z++){

	       if (s[z]=='}')
	       break;
	}
	string s1=s.substr(0,z+1);
	string op=s.substr(z+2,1);
	string s2=s.substr(z+4);
	set<int> set1, set2;
	set1=parseSet(s1);
	set2=parseSet(s2);
	
	if (op=="+"){
		set<int> result;
		result=getUnion(set1, set2);
		printSet(result);}

	else if (op=="*"){
		set<int> result;
		result=getIntersection(set1, set2);
		printSet(result);}
	else if (op=="-"){
		set<int> result;
		result=getDifference(set1, set2);
		printSet(result);}
	}}
}
