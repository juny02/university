#include "sorted.h"
#include <iostream>
#include <vector>
using namespace std;

int main ()
{	SortedArray A;
	while(1){
		int a;
		do
		{
			cin>>a;
			A.AddNumber(a);
		} while (getc(stdin) == ' ');
		int o=0;
		while(1){
		string k;
		cin>>k;
		if (k=="ascend"){
		o++;
		for (int i=0; i< (int)A.GetSortedAscending().size(); i++){
				cout<< A.GetSortedAscending()[i]<<" "; 
			}
			cout<<endl;}
		if (k=="descend"){ 
			o++;
			for (int i=0; i< (int)A.GetSortedDescending().size(); i++){
				cout<< A.GetSortedDescending()[i]<<" ";}
			cout<<endl;}
		if (k=="min"){
			o++;
			cout<<A.GetMin()<<endl;}
		if(k=="max"){
			o++;
			cout<<A.GetMax()<<endl;}
		if(k=="quit") return 0;
		if (o==4) break;}}
}
