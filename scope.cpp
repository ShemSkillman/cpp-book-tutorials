#include <iostream>
using namespace std;

float BodyTempCelsius();
float BodyTempFahrenheit();

int main()
{
	cout << "Centigrade: " << BodyTempCelsius() << endl;
	cout << "Fahrenheit: " << BodyTempFahrenheit() << endl;
	return 0;
}

float BodyTempCelsius()
{
	return 37.0f;
}

float BodyTempFahrenheit()
{
	return 98.6f;
}

	