#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int numLines = 4;
	string poemLines[numLines] = {"I never saw a man who looked", "With such a wistful eye",
	"Upon that little tent of blue", "Which prisoners call the sky"};
	
	string poem;
	
	for (int i = 0; i < numLines; i++)
	{
		poem += "\n\t" + poemLines[i];
	}
	
	ofstream writer("poem.txt");
	
	if (!writer)
	{
		cout << "Error opening file for output" << endl;
		
		// Signal error and exit program
		return -1;
	}
	
	writer << poem << endl;
	writer.close();
	
	return 0;
}
		
		