
#include <iostream>
#include "shapes.h"
using namespace std;
int main ()
{
	while (1)
	{	cout<<"shape?"<<endl;
		char a;
		cin>>a;
		if (a=='C'){
			int a,b,c;
			cin>>a>>b>>c;
			Circle cir(a,b,c);
			cout<<"area: "<<cir.cArea()<<", perimeter: "<<cir.cPeri()<<endl;
			cout<<endl;
		}
		if (a=='R'){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			Rectangle rec (a,b,c,d);
			cout<<"area: "<<rec.rArea()<<", perimeter: "<<rec.rPeri()<<endl;
			cout<<endl;
		}
		if (a=='Q')
			break;
	}
	return 0;}
