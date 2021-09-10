#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1, str2, str3;
	cin>>str1;
	cin>>str2;
	str3=str1+str2;
	cout<<str3<<endl;
	int a;
	a=str3.length()-1;
	cout<<str3[0]<<endl<<str3[a]<<endl;
	return 0;
}
