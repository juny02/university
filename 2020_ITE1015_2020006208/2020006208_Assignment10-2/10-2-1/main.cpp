#include "clocks.h"
#include "clock_time.h"
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
	vector<Clock*> arr;
	int t;
	cin>>t;
	arr.push_back(new SundialClock(0,0,0));
	arr.push_back(new CuckooClock(0,0,0));
	arr.push_back(new GrandFatherClock(0,0,0));
	arr.push_back(new WristClock(0,0,0));
	arr.push_back(new AtomicClock(0,0,0));
	for (int i=0; i<arr.size() ;i++)
		arr[i]->reset();
	cout<<"Reported clock times after resetting:"<<endl;
	for (int i=0; i<arr.size() ;++i)
		arr[i]->displayTime();
	cout<<endl<<"Running the clocks ..."<<endl<<endl;

	cout<<"Reported clock times after running:"<<endl;
	for (int i=0; i<arr.size() ;++i){
		for(int k=0; k<t; k++)
			arr[i]->tick();
		arr[i]->displayTime();}
	for (int i=0; i<arr.size() ;++i)
		delete arr[i];
}
