#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vec (3, 100);
	
	cout << "Intialized vector: vector <int> vec (3, 100)" << endl;
	cout << "Vector size: " << vec.size() << endl;
	cout << "Is Vector empty : " << vec.empty() << endl;
	cout << "First element: " << vec.at(0) << endl;
	
	//Remove final element
	vec.pop_back();
	cout << "Removed final element" << endl;
	
	cout << "Vector size: " << vec.size() << endl;
	cout << "Final element: " << vec.back() << endl;
	
	//Remove all elements
	vec.clear();
	cout << "Cleared all elements" << endl;
	cout << "Vector size: " << vec.size() << endl;
	
	// Add an element
	vec.push_back(200); 
	cout << "Added element 200" << endl;
	
	cout << "Vector size: " << vec.size() << endl;
	cout << "First element: " << vec.front() << endl;
	
	return 0;
}
