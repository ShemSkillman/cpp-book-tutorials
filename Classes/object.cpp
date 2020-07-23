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
	void setAge(int yrs) { age = yrs;}
	void setWeight(int lbs) {weight = lbs;}
	void setColour(string hue){colour = hue;}
	int getAge() {return age;}
	int getWeight() {return weight;}
	string getColour() {return colour;}
	
};

int main()
{
	Dog fido;
	
	fido.setAge(3);
	fido.setWeight(15);
	fido.setColour("brown");
	
	cout << "Fido is a " << fido.getColour() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;
	
	fido.bark();
	
	return 0;
}