#include <iostream>
using namespace std;

float FahrenheitToCelsius(float fahrenheit = 32.0f);

int main()
{
	float fahrenheit, celsius;
	
	cout << "Enter a Fahrenheit temperature:\t";
	cin >> fahrenheit;
	
	celsius = FahrenheitToCelsius(fahrenheit);
	
	cout << fahrenheit << "F is " << celsius << "C";
	cout << endl << "Freezing point: " << FahrenheitToCelsius() << "C";
	
	return 0;
}

float FahrenheitToCelsius(float fahrenheit)
{
	float celsius = ((5.0f / 9.0f) * (fahrenheit - 32.0f));
	return celsius;
}

	