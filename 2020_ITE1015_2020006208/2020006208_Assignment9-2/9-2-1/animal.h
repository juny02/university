#include <iostream>
using namespace std;
class Animal 
{	public:
	virtual void printInfo() {}
	virtual ~Animal();
	string name;
	int age;
	Animal(string n, int a);
};

class Zebra : public Animal
{
	public:
	virtual void  printInfo();
	virtual ~Zebra();
	int numStripes;
	Zebra(string n_, int a_, int ns);
};

class Cat : public Animal
{
	public:
	virtual void  printInfo();
	virtual ~Cat();
	string favoriteToy;
	Cat(string q,  int w, string f);
};

