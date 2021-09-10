#include <stdio.h>
void printString(const char* str)
{
	printf("%s\n", str);
}
void main ()
{
	const char* arr[3]= {"One", "Two", "Three"};
	void (*f)(const char*);
	f=printString;
	for (int i=0; i<3; i++)
		f(arr[i]);
}

