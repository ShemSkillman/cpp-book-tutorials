#include <iostream>
using namespace std;

int ComputeFactorials(int, int);

// Program does not need to keep checking between declaration and defintion
// Improves efficiency
inline int Factorial(int n)
{ return (n == 1) ? 1 : (Factorial(n - 1) * n); }

int main()
{
	int min, max;
	
	cout << "Min factorial: ";
	cin >> min;
	
	cout << "Max factorial: ";
	cin >> max;	
	
	ComputeFactorials(min, max);
	
	return 0;
}

int ComputeFactorials(int num, int max)
{
	cout << "Factorial of " << num << ": " << Factorial(num) << endl;
	num++;
	if (num  > max) return 0;
	else ComputeFactorials(num, max);
}

// Un-optimized Factorial func
/*
int Factorial(int n)
{
	int result;
	if (n == 1) result = 1;
	else result = (Factorial(n - 1) * n);
	return result;
}
*/