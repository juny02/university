#include "message.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

MessageBook::MessageBook(){
}
MessageBook::~MessageBook(){
}
void MessageBook::AddMessage(int number, const string& message){
	messages_[number]=message;}

void MessageBook::DeleteMessage(int number){
	messages_.erase(number);}

vector<int> MessageBook::GetNumbers(){
	vector <int> a;
	map<int, string>::iterator it;
	for (it = messages_.begin(); it != messages_.end(); ++it){
		a.push_back(it->first);
	}return a;}
const string& MessageBook::GetMessage(int number){
	return messages_[number];}


