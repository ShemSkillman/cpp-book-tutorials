#include <iostream>
using namespace std;

int main()
{
	int a, b, max;
	a = 1, b = 2;
	
	cout << "Variable a value is: ";
	cout << ((a != 1) ? "Not one, " : "one, ");
	cout << ((a % 2 != 0) ? "odd" : "even");
	
	max = (a > b) ? a : b;
	cout << endl << "Greater value is: " << max << endl;
	
	return 0;
}