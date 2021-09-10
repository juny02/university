#include "my_container.h"
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	MyContainer<int> my1(n);
	cin>>my1;
	cout<<my1;

	int nn;
	cin>>nn;
	MyContainer<double> my2(nn);
	cin>>my2;
	cout<<my2;

	int nnn;
        cin>>nnn;
        MyContainer<string> my3(nnn);
        cin>>my3;
        cout<<my3;

        return 0;
}
