#include <iostream>
using namespace std;

template <typename T>
void myswap(T& a, T& b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}

int main (){
	int i,i1;
	double d, d1;
	string s,s1;
	cin>>i>>i1;
	myswap<int>(i,i1);
	cout<<"After calling myswap(): "<<i<<" "<<i1<<endl;
	cin>>d>>d1;
	myswap<double>(d, d1);
	cout<<"After calling myswap(): "<<d<<" "<<d1<<endl;
	cin>>s>>s1;
	myswap<string>(s,s1);
	cout<<"After calling myswap(): "<<s<<" "<<s1<<endl;
	return 0; 
}
