#include <iostream>
using namespace std;

int main()
{
	int a = 8, b = 4;
	
	cout << "Assign vaues: " << "A = " << a << " B = " << b << endl;
	cout << "Add & assign: " << " a += b a = " << (a += b) << endl;
	cout << "Subtract & assign: " << " a -= b a = " << ( a -= b) << endl;
	cout << "Multiply & assign: " << " a *= b a = " << (a *= b) << endl;
	cout << "Divide & assign: " << " a /= b a = " << (a /= b) << endl;
	cout << "Modulus & assign: " << " a %= b a = " << (a %= b) << endl;
	
	return 0;
}