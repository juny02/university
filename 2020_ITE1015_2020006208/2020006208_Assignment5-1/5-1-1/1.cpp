#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
	int a = atoi(argv[argc-1]);
	for (int i=0; i<a;i++)
		cout<<argv[1]<<endl;
	return 0;
}
