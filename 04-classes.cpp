/*
 * IN THIS LESSON:
 * 	Classes
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	
using namespace std;

class Person
{
	public:		//unlike in java, you section off your public and private methods, vars, ect
		Person(string nm, int ag, bool gndr)
		{
			name = nm;
			age = ag;
			gender = gndr;
		}
		~Person() 
		// does not take parameters.
		// called when destroyed, when you do delete x; for cleaning up
		// btw destructors are optional
		{
			cout << "Destroyed Person " << name << endl;
		}
		string getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
		bool getGender()
		{
			return gender;
		}
		int x = 0;
	private:
		string name;
		int age;
		bool gender;	//oops controversial code
};

int main()
{
	Person *t = new Person("Tyler", 17, true);
	//printf("Name: %s\nAge: %d\ngender: %d", t -> getName(), t -> getAge(), t -> getGender());
	//yea printf doesn't work really well here, I'd have to store it in a char array first
	cout << "Name: " << t -> getName() << "\nAge: " << t -> getAge() << "\nGender: " << t -> getGender() << endl;
	//notice that we use -> instead of .
	//This is because when we pass by reference, we must point to the value or function we want. You can use the dot notation when you have something like Person t; not when using Person *t;
	delete t;
	
	//ASSIGNMENT: Write a class for a book, create two book objects with different values, print the values, and don't forget to delete them.

	return 0;
}
