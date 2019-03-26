/*
 * IN THIS LESSON:
 * 	Inheritence
 * 	Public, Private, Protected
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	
using namespace std;


class Vehicle
{
	public:
		Vehicle(int w, int r, int g, int b)
		{
			wheels = w;
			color[0] = r;
			color[1] = g;
			color[2] = b;
		}
		int getColor( int i )
		{	return color[i];}
		int getWheels()
		{	return wheels;	}
		
	protected:	
		//can access the value from inheriting class.
		int wheels;
		int color[3]; //rgb values. Initialized an array of size 3.
};

class Car : public Vehicle	//Car inherits all public methods/variables from Vehicle
{
	public:
		Car(int r = 255, int g = 255, int b = 255) : Vehicle(4,r,g,b)	//notice that this is calling the constructor in the base class. No super() in c++
		//calls constructor for the base class Vehicle
		{
			printf("Built a Car\n");
		}
		
};
class Plane : public Vehicle	//Plane inherits all public methods/variables from Vehicle
{
	public:
		Plane(int r = 255, int g = 255, int b = 255) : Vehicle(3,r,g,b)
		{
			printf("Built a Plane\n");
		}
};

int main()
{
	Vehicle *c = new Car();		//again, c is just a pointer to the object
	printf("Car wheels: %d\nR: %d\nG: %d\nB: %d\n", c -> getWheels(), c -> getColor(0), c -> getColor(1), c -> getColor(2) );
	delete c;


	Vehicle *p = new Plane();	// Is-a relationship. Plane is a Vehicle.
	printf("Plane wheels: %d\nR: %d\nG: %d\nB: %d\n", p -> getWheels(), p -> getColor(0), p -> getColor(1), p -> getColor(2) );
	delete p;


	//we can put these in an array of pointers.
	Vehicle *arr[] = {new Car(), new Plane(), new Plane()};
	printf("From Array:\nCar Wheel: %d\nPlane Wheel: %d\n", arr[0] -> getWheels(), arr[1] -> getWheels());

	printf("sizeof arr: %d\n", sizeof(arr));
	for (int i = 0; i < sizeof(arr)/8; i++)	//each object took 8 bytes. using sizeof(), we can find the space taken in memory.
		delete arr[i];	//and we need to de-allocate the memory used to prevent leaks.

	return 0;
}
