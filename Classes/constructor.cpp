#include <string>
#include <iostream>
using namespace std;

class Dog
{
	private:
	int age, weight;
	string colour;
	
	public:
	Dog(int, int, string);
	~Dog();
	void bark(){cout << "WOOF!" << endl;}	
	int getAge() {return age;}
	int getWeight() {return weight;}
	string getColour() {return colour;}	
};

Dog::Dog(int age,int weight, string colour)
{
	this -> age = age;
	this -> weight = weight;
	this -> colour = colour;
}

Dog::~Dog()
{
	cout << "Object destroyed." << endl;
}

int main()
{
	Dog fido(3, 15, "brown");	
	Dog pooch(4, 18, "grey");
	
	cout << "Fido is a " << fido.getColour() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;
	fido.bark();
	
	cout << "Pooch is a " << pooch.getColour() << " dog" << endl;
	cout << "Pooch is " << pooch.getAge() << " years old" << endl;
	cout << "Pooch weighs " << pooch.getWeight() << " pounds" << endl;
	pooch.bark();
	
	return 0;
}