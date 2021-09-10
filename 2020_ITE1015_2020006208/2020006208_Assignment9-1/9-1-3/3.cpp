#include <iostream>
#include <vector>
using namespace std;

class A 
{	private:
	int* a;

	public:
	A(int aa){
		a=new int;
	
		*a=aa;
		cout<<"new memberA"<<endl;}
	virtual ~A(){ 
		delete a;
		cout<<"delete memberA"<<endl;}
	virtual void print(){
		cout<<"*memberA "<<*a<<endl;}
};

class B : public A 
{
	private:
	double* b;

	public:
	B(double bb):A(1){ 
		b=new double;
		*b = bb;
		cout<<"new memberB"<<endl;
	}
	virtual ~B(){ 
		delete b;
		cout<<"delete memberB"<<endl;}
	virtual void print(){
		A::print();
		cout<<"*memberB "<<*b<<endl;}
};

class C : public B
{
	private:
	string* c;

	public:
	C(string& cc):B(1.1){
		c=new string;
		*c=cc;
		cout<<"new memberC"<<endl;}
	virtual ~C(){
		delete c;
		cout<<"delete memberC"<<endl;}
	virtual void print(){
		B::print();
		cout<<"*memberC "<<*c<<endl;}
};

int main (){
	int i;
	double d;
	string s;
	cin>>i>>d>>s;
	A* A_ = new A(i);
	B* B_ = new B(d);
	C* C_ = new C(s);
	vector<A*> arr;
	arr.push_back(A_);
	arr.push_back(B_);
	arr.push_back(C_);
	for(int i=0; i<3; i++)	arr[i]->print();
	for(int i=0; i<3; i++) delete arr[i];
	return 0;
}

	

