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
	Dog();
	Dog(int, int);
	~Dog();
	void bark(){cout << "WOOF!" << endl;}	
	void bark(string noise){cout << noise << endl;}
	int getAge() {return age;}
	int getWeight() {return weight;}
	string getColour() {return colour;}	
};

Dog::Dog()
{
	age = 1;
	weight = 2;
	colour = "black";
}

Dog::Dog(int age, int weight)
{
	this -> age = age;
	this -> weight = weight;
	colour = "white";
}

Dog::Dog(int age,int weight, string colour)
{
	this -> age = age;
	this -> weight = weight;
	this -> colour = colour;
}

Dog::~Dog()
{
	cout << "Dog destroyed." << endl;
}

int main()
{
	Dog fido(3, 15, "brown");	
	Dog pooch(4, 18, "grey");
	Dog rex;
	Dog sammy(2, 6);
	
	cout << "Fido is a " << fido.getColour() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;
	fido.bark();
	
	cout << "Pooch is a " << pooch.getColour() << " dog" << endl;
	cout << "Pooch is " << pooch.getAge() << " years old" << endl;
	cout << "Pooch weighs " << pooch.getWeight() << " pounds" << endl;
	pooch.bark();
	
	cout << "Rex is a " << rex.getColour() << " dog" << endl;
	cout << "Rex is " << rex.getAge() << " years old" << endl;
	cout << "Rex weighs " << rex.getWeight() << " pounds" << endl;
	rex.bark("GRRR!");
	
	cout << "Sammy is a " << sammy.getColour() << " dog" << endl;
	cout << "Sammy is " << sammy.getAge() << " years old" << endl;
	cout << "Sammy weighs " << sammy.getWeight() << " pounds" << endl;
	sammy.bark("BOWOW!");
	
	return 0;
}