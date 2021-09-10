#include <iostream>
#include <cstdlib>
#include "minmax.h"
using namespace std;

int main (int argc, char**argv)
{
	int N= argc-1;
	int* arr= new int [N];
	for (int i=0; i<N; i++)
		arr[i]=atoi(argv[i+1]);
	int min=0, max=0;
	getMinMax(arr,N,min, max);
	cout<<"min: "<<min<<endl;
	cout<<"max: "<<max<<endl;
	delete[] arr;
	return 0;
}


