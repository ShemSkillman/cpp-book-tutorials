#include <iostream>
using namespace std;

class Parent
{
	protected:
		int a = 1;
	public:
		Parent() {cout << "Default Parent constructor called.";}
		Parent(int a) {cout << endl << "Overloaded Parent constructor called."; this -> a = a;}
};

class Daughter : public Parent
{
	public:
		Daughter() {cout << endl << "	Derived Daughter class default constructor called.";}
};

class Son : public Parent
{
	public:
		Son(int a) : Parent(a) {cout << endl << "	Derived Son clas overloaded constructor called." << " Int a: " << a;}
};

int main()
{
	Daughter emma;
	Son andrew(5);
	return 0;
}