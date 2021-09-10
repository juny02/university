#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <stdlib.h>
using namespace std;
set<int> parseSet(const std::string& str){
	set<int> k={};
	string num="";
	for(int i=1 ; i<str.length(); i++){
		string n;
		n=str[i];
		if(n!=" " && n!="}" && n!="{"){
			num+=n;}
		else if (n ==" "||n=="}") {
			if(num!=""){
			k.insert(atoi(num.c_str()));}
			num="";
		}
	}
	return k;
}

	
void printSet(const set<int>& s){
	cout<<"{";
	for(set<int>::const_iterator it = s.begin(); it!=s.end(); ++it)
		cout<<" "<<*it;
	cout<<" }"<<endl;}

set<int> getIntersection(const set<int>& set0, const set<int>& set1){
	set<int> it;
	auto iter = set_intersection(set0.begin(), set0.end(), set1.begin(), set1.end(),inserter(it,it.begin()));
	return it;}

set<int> getUnion(const set<int>& set0, const set<int>& set1){
	set<int> u;
	auto iter = set_union(set0.begin(), set0.end(), set1.begin(), set1.end(),inserter(u,u.begin()));
	return u;}

set<int> getDifference(const set<int>& set0, const set<int>& set1){
	set<int> diff;
	auto iter = set_difference(set0.begin(), set0.end(), set1.begin(), set1.end(),inserter(diff,diff.begin()));
	return diff;}

