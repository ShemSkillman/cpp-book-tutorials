#include <string>
#include <iostream>
using namespace std;

class Dog
{
	private:
	int age, weight;
	string colour;
	
	public:
	void bark(){cout << "WOOF!" << endl;}
	void setValues(int, int, string);
	int getAge() {return age;}
	int getWeight() {return weight;}
	string getColour() {return colour;}	
};

void Dog::setValues(int age, int weight, string colour)
{
	this -> age = age;
	this -> weight = weight;
	this -> colour = colour;
}

int main()
{
	Dog fido;
	
	fido.setValues(3, 15, "brown");
	
	Dog pooch;
	pooch.setValues(4, 18, "grey");
	
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