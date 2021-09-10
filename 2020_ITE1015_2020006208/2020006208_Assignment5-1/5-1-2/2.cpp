#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct
{
	string name;
	double score;
}Person;
int main (int argc, const char** argv) {
	int a=(argc-1)/2;
	int b=1;
	Person* arr= new Person[a];
	for (int i=0; i<a;i ++)
	{
		arr[i].name=argv[b];
		b++;
		arr[i].score=atof(argv[b]);
		b++;
	}
	for (int i=0; i<a; i++)
	{
		cout<<"Name:"<<arr[i].name<<", Score:"<<arr[i].score<<endl;
	}
	delete[] arr;
	return 0;
}
