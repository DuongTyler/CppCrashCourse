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
		int wheels;
		int color[3]; 
};

class Car : public Vehicle	
{
	public:
		Car(int r = 255, int g = 255, int b = 255) : Vehicle(4,r,g,b)
		{
			printf("Built a Car\n");
		}
		
};
class Plane : public Vehicle	
{
	public:
		Plane(int r = 255, int g = 255, int b = 255) : Vehicle(3,r,g,b)
		{
			printf("Built a Plane\n");
		}
};

int main()
{
	Vehicle *c = new Car();		
	printf("Car wheels: %d\nR: %d\nG: %d\nB: %d\n", c -> getWheels(), c -> getColor(0), c -> getColor(1), c -> getColor(2) );
	delete c;


	Vehicle *p = new Plane();	
	printf("Plane wheels: %d\nR: %d\nG: %d\nB: %d\n", p -> getWheels(), p -> getColor(0), p -> getColor(1), p -> getColor(2) );
	delete p;


	Vehicle *arr[] = {new Car(), new Plane(), new Plane()};
	printf("From Array:\nCar Wheel: %d\nPlane Wheel: %d\n", arr[0] -> getWheels(), arr[1] -> getWheels());

	printf("sizeof arr: %d\n", sizeof(arr));
	for (int i = 0; i < sizeof(arr)/8; i++)	
		delete arr[i];	

	return 0;
}
