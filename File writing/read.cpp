#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line;
	int i;
	
	ifstream reader("poem.txt");
	if (!reader)
	{
		cout << "Error opening input file" << endl;
		
		// Signal error
		return -1;
	}
	
	for (i = 0; !reader.eof(); i++)
	{
		getline(reader, line);
		cout << line << endl;
	}
	
	cout << "Iterations: " << i << endl;
	
	return 0;
}