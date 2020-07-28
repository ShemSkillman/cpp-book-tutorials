#include <iostream>
using namespace std;

class Boat
{
	protected:
		int length;
	public:
		int getLength() { return length;}
		virtual void model() = 0;
};

class Sailboat : public Boat
{
	protected:
		int mast;
	public:
		int getMast() { return mast; }
		virtual void boom() = 0;
};

class PowerBoat : public Boat
{
	protected:
		int enginePower;
	public:
		int getEnginePower() { return enginePower; }		
		virtual void fuel() = 0;
};

class Cruiser : public PowerBoat
{
	public:
		Cruiser() { enginePower = 1000; length = 50; }
		~Cruiser();
		void model() { cout << "Cruiser deluxe" << endl; }
		void fuel() { cout << "Fuel type: diesel" << endl; }
};
	

class Laser : public Sailboat
{
	public:
		Laser() { mast = 19; length = 35;}
		~Laser();
		void model() { cout << "Laser Classic" << endl; }
		void boom() { cout << "Boom: 14ft" << endl; }
};

int main()
{
	Laser* ptrLaser = new Laser;
	
	ptrLaser -> model();
	cout << "Length: " << ptrLaser -> getLength() << "ft" << endl;
	cout << "Height: " << ptrLaser -> getMast() << "ft" << endl;
	ptrLaser -> boom();
	
	Cruiser* ptrCruiser = new Cruiser;
	
	ptrCruiser -> model();
	cout << "Length: " << ptrCruiser -> getLength() << "ft" << endl;
	cout << "Horse power engine: " << ptrCruiser -> getEnginePower() << "hp" << endl;
	ptrCruiser -> fuel();
	
	return 0;
}