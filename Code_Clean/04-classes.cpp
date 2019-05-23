#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	
using namespace std;

class Person
{
	public:		
		Person(string nm, int ag, bool gndr)
		{
			name = nm;
			age = ag;
			gender = gndr;
		}
		~Person() 
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
		bool gender;	
};

int main()
{
	Person *t = new Person("Tyler", 17, true);
	cout << "Name: " << t -> getName() << "\nAge: " << t -> getAge() << "\nGender: " << t -> getGender() << endl;
	delete t;
	
	return 0;
}
