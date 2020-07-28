#include "ops.h"

int main()
{
	Calculator* ptrCalc = new Calculator;
	ptrCalc -> launch();
	
	while (ptrCalc -> run())
	{
		ptrCalc -> readInput();
		ptrCalc -> writeOutput();
	}
	
	return 0;
}