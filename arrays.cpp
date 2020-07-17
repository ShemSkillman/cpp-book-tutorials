#include <iostream>
using namespace std;

int main()
{
	// Declared then initialized
	float nums[3];
	nums[0] = 1.5f; nums[1] = 2.75f; nums[2] = 3.25f;
	
	// Declared and initialized
	char name[5] = {'s', 'h', 'e', 'm', '\0'};
	int coords[2][3] = {{1, 2, 3}, {4, 5, 6}};
	
	cout << "nums[0]: " << nums[0] << endl;
	cout << "nums[1]: " << nums[1] << endl;
	cout << "nums[2]: " << nums[2] << endl;
	cout << "name[0]: " << name[0] << endl;
	cout << "name string: " << name << endl;
	cout << "coords[0][2]: " << coords[0][2] << endl;
	cout << "coords[1][2]: " << coords[1][2] << endl;
	
	return 0;
}
