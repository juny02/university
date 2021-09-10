#include "intset.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

IntegerSet::IntegerSet(){
	numbers_={};
}
IntegerSet::~IntegerSet(){}

void IntegerSet::AddNumber(int num){
	vector<int>::iterator iter;
	int a;
	for (iter=numbers_.begin(); iter!=numbers_.end(); iter++)
	{
		if (*iter==num) a=0;
	}
	if (a!=0) numbers_.push_back(num);
	sort(numbers_.begin(),numbers_.end());
	for (int i=0; i<(int)numbers_.size(); i++)
		cout << numbers_[i]<<" ";
	cout<<endl;
}

void IntegerSet::DeleteNumber(int num){
	int a;
	vector<int>::iterator iter;
	for (iter=numbers_.begin(); iter!=numbers_.end(); iter++)
	{
		if (*iter==num){
		a=iter-numbers_.begin();
		break;}
	}
	numbers_.erase(numbers_.begin()+a);
	for (int i=0; i<(int)numbers_.size(); i++)
		cout <<numbers_[i]<<" ";
	cout<<endl;
}

int IntegerSet::GetItem(int pos){
	if ((int)numbers_.size()>pos)
		return numbers_[pos];
	else 
		return -1;}

std::vector<int> IntegerSet::GetAll(){
	return numbers_;
}

