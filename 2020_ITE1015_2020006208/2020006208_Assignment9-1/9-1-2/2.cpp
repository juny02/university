#include <iostream>
#include <vector>
using namespace std;

class A {
	public:
	A() {}
	virtual ~A(){}
	virtual string getTypeInfo(){ return "This is an instance of class A"; }
};
class B : public A
{
	public:
	B(){}
	virtual ~B(){}
	virtual string getTypeInfo(){ return "This is an instance of class B"; }
};
class C :public B 
{
	public:
	C (){}
	virtual ~C(){}
	virtual string getTypeInfo(){ return "This is an instance of class C"; }
};

void printObjectTypeInfo1(A* object){
	cout<<object->getTypeInfo()<<endl;
}
void printObjectTypeInfo2(A& object){
	cout<<object.getTypeInfo()<<endl;
}
	

int main (){
	vector<A*> arr;
	A* a=new A;
	B* b=new B;
	C* c=new C;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	for (int i=0; i<arr.size(); i++){
		printObjectTypeInfo1(arr[i]);
		printObjectTypeInfo2(*arr[i]);
	}
	for (int i=0; i<arr.size();i++)
		delete arr[i];
	return 0;
}
