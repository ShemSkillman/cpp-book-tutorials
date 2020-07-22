#include <string>
#include <iostream>
using namespace std;

int main()
{
	string front, back;
	string text = "Always laugh when you can. It's cheap medicine.";
	
	front.assign(text);
	cout << endl << "Front: " << front << endl;
	
	front.assign(text, 0, 27);
	cout << endl << "Front: " << front << endl;
	
	back.assign(text, 27, text.size());
	cout << "Back: " << back << endl;
	
	back.swap(front);
	cout << endl << "Front: " << front << endl;
	cout << "Back: " << back << endl;
	
	return 0;
}
