#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "message.h"
using namespace std;

int main()
{
	MessageBook mb;
	while(1){
	string str;
	cin>>str;
	if (str=="add"){
		int q;
		string w;
		cin>>q;
		getline (cin, w);
		string ww=w.substr(1);
		mb.AddMessage(q,ww);}
	else if (str=="delete"){
		int q;
		cin>>q;
		mb.DeleteMessage(q);}
	else if (str=="print"){
		int q;
		cin>>q;
		cout<<mb.GetMessage(q)<<endl;}

	else if (str == "list"){
		vector<int> kkk=mb.GetNumbers();
		for(int p=0;p<(int)kkk.size();p++){
			cout<<kkk[p]<<": "<<mb.GetMessage(kkk[p])<<endl;
		}
	}
	else if (str == "quit") return 0;}
}
		
