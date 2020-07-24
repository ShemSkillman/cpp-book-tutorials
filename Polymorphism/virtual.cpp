#include <iostream>
using namespace std;

class Parent
{
	public:
		void common() const
		{cout << "I am part of this family, ";}
		
		virtual void identify() const
		{cout << "I am the parent" << endl;}
};

class Child : public Parent
{
	public: 
		void identify() const
		{cout << "I am the child" << endl;}
};

class Grandchild : public Child
{
	public:
		void identify() const
		{cout << "I am the grandchild" << endl;}
		
		void relate() const
		{cout << "Grandchild has parent and grandparent";}
};

int main()
{
	Child son;
	Grandchild grandson;
	Parent* ptrChild = &son;
	Parent* ptrGrandchild = &grandson;
	
	ptrChild -> common();
	ptrChild -> identify();
	ptrGrandchild -> common();
	ptrGrandchild -> identify();
	ptrChild -> Parent::common();
	ptrChild -> Parent::identify();
	grandson.relate();
	
	return 0;
}