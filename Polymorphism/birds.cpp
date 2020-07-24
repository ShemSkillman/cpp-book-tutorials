#include <iostream>
using namespace std;

class Bird
{
	public:
		virtual void talk() const
		{cout << "A bird talks..." << endl;}
		virtual void fly() const
		{cout << "A bird flies..." << endl;}
};

class Pigeon : public Bird
{
	public:
		void talk() const
		{cout << "Coo! Coo!" << endl;}
		void fly() const
		{cout << "A pigeon flies away..." << endl;}
};

class Chicken : public Bird
{
	public:
		void talk() const
		{cout << "Cluck! Cluck!" << endl;}
		
		void fly() const
		{cout << "I'm just a chicken - I can't fly" << endl;}
};

int main()
{
	Bird* ptrPigeon = new Pigeon;
	Bird* ptrChicken = new Chicken;
	
	ptrPigeon -> talk();
	ptrPigeon -> fly();
	ptrChicken -> talk();
	ptrChicken -> fly();
	ptrPigeon -> Bird::talk();
	ptrChicken -> Bird::fly();
	
	
	return 0;
}
