#if defined WIN32
	#define PLATFORM "Windows"
#elif defined __linux
	#define PLATFORM "Linux"
#else
	#define PLATFORM "Unknown"
#endif

#include <iostream>
using namespace std;

int main()
{
	cout << PLATFORM << " System" << endl;
	
	if (PLATFORM == "Windows")
		cout << "Performing Windows-only tasks..." << endl;
	else if (PLATFORM == "Linux")
		cout << "Performing Linux-only tasks..." << endl;
	
	return 0;
}