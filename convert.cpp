#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string term = "100";
	int number = 100;
	
	int num;
	string text;
	stringstream stream;
	
	// Load string
	stream << term;
	
	// Extract the integer
	stream >> num;
	
	num /= 4;
	cout << "Integer value: " << num << endl;
	
	// Empty contents
	stream.str("");
	
	// Empty bit flags
	stream.clear();
	
	// Load integer
	stream << number;
	
	// Extract the string
	stream >> text;
	
	text += " Per Cent";
	cout << "String value: " << text << endl;
	
	return 0;
}