#include <iostream>
#include <vector>
using namespace std;

class A{
	public:
	virtual void test(){ cout<<"A::test()"<<endl; }
	A(){}
	virtual ~A(){}
};

class B : public A
{	public:
	virtual void test(){ cout<<"B::test()"<<endl; }
	B() {}
	virtual ~B() {}
};

class C : public B
{
	public:
	virtual void test(){ cout<<"C::test()"<<endl; }
	C() {}
	virtual ~C() {}
};

int main (){
	vector<A*> arr;
	arr.push_back(new A);
	arr.push_back(new B);
	arr.push_back(new C);
	for (int i=0; i<3;i++)
		arr[i]->test();
	for (int i=0; i<arr.size(); i++)
		delete arr[i];
	return 0;
}


