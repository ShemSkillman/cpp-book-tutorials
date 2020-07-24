#include <iostream>
using namespace std;

class Bird
{
	public:
		virtual int talk() const {return -1;}
		virtual int fly() const {return -1;}
};

class Pigeon : public Bird
{
	public:
		int talk() const
		{cout << "Coo! Coo!" << endl; return 0;}
		int fly() const
		{cout << "A pigeon flies away..." << endl; return 0;}
};

class Chicken : public Bird
{
	public:
		int talk() const
		{cout << "Cluck! Cluck!" << endl; return 0;}
		int fly() const
		{cout << "I'm just a chicken - I can't fly!" << endl; return 0;}
};

int main()
{
	Bird* ptrPigeon = new Pigeon;
	Bird* ptrChicken = new Chicken;
	
	ptrPigeon -> talk();
	ptrChicken -> talk();
	
	int a = ptrPigeon -> Bird::talk();
	if (a == -1) {cout << "Error! - Program ended." << endl; return 0;}
	
	ptrPigeon -> fly();
	ptrChicken -> fly();
	return 0;
}