#include <iostream>
#include <string>
using namespace std;
void swapInt(int& n1, int& n2){
	int a;
	a=n1;
	n1=n2;
	n2=a;
}
void swapString(std::string& s1,std::string& s2){
	string a=s1;
	s1=s2;
	s2=a;
}
int main ()
{
	int n1, n2;
	cin>>n1>>n2;
	string s1,s2;
	cin>>s1>>s2;
	cout<<"n1: "<<n1<<", n2: "<<n2<<", s1: "<<s1<<", s2: "<<s2<<endl;
	swapInt(n1, n2);
	swapString(s1,s2);
	cout<<"n1: "<<n1<<", n2: "<<n2<<", s1: "<<s1<<", s2: "<<s2<<endl;
        return 0;
}

