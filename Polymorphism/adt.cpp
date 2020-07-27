#include <iostream>
using namespace std;

class Shape
{
	public:
		virtual int getArea() = 0;
		virtual int getPerimeter() = 0;
		virtual void draw() = 0;
};

class Rect : public Shape 
{
	public:
		Rect(int initWidth, int initHeight)
		{
			height = initHeight;
			width = initWidth;
		}		
		~Rect();
		int getArea() {return height * width;}
		int getPerimeter() {return (2 * height) + (2 * width);}
		void draw();
	private:
		int height, width;
};

void Rect::draw()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "x ";
		}
		cout << endl;
	}
}

int main()
{
	Shape* ptrQuad = new Rect(3, 7);
	Shape* ptrSquare = new Rect(5, 5);
	
	ptrQuad -> draw();
	cout << "Area is " << ptrQuad -> getArea() << endl;
	cout << "Perimeter is " << ptrQuad -> getPerimeter() << endl;
	
	ptrSquare -> draw();
	cout << "Area is " << ptrSquare -> getArea() << endl;
	cout << "Perimeter is " << ptrSquare -> getPerimeter() << endl;
	
	return 0;
}


