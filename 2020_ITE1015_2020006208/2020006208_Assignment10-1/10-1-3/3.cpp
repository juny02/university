#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

class B
{
	public:
		 virtual ~B() {}
};
class C : public B
{
	public:
		 void test_C() { cout << "C::test_C()" << endl; }
};
class D : public B
{
	public:
		 void test_D() { cout << "D::test_D()" << endl; }
};

int main () {
	string s;
	vector<B*> arr;
	vector<string> a;
	while(1){
		cin>>s;
		if (s=="B"){ 
			arr.push_back(new B); 
			a.push_back("B"); }
		else if (s=="C"){
		       	arr.push_back(new C);
			a.push_back("C"); }
		else if (s=="D"){
		       	arr.push_back(new D);
			a.push_back("D"); }
		else if (s=="0"){
			for (int i=0; i<arr.size();++i){
				if (a[i]=="C"){
					C* cc=static_cast<C*>(arr[i]);
					cc->test_C();}
				else if (a[i]=="D"){
					D* dd=static_cast<D*>(arr[i]);
					dd->test_D(); } }
			for (int i=0; i<arr.size();++i)
				delete arr[i];
			return 0;}
	}
}
					

