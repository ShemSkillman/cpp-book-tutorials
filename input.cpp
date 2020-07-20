#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Please enter your full name: ";
	cin >> name;
	
	cout << "Hello " << name << "!";
	
	cout << endl << "Please re-enter your full name: ";
	
	cin.ignore(256, '\n');
	getline(cin , name);
	cout << endl << "Thanks, " << name;
}