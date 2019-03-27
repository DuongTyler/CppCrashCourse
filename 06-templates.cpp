/*
 * IN THIS LESSON:
 * 	Templates
 * 	switch(case)
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	
using namespace std;

//templates are special functions that accept any kind of data type
template<class T> T sum(T a, T b)
{
	return a+b;
}

//You can also take in two different datatypes in a template too.
template<class T, class T2> T multiply(T a, T2 b)
{
	return a*b;
}

//Templates also work on Classes
template<class T> class TemplateClass
{
	private:
		T alpha, bravo;
	public:
		TemplateClass(T a, T b) : alpha(a), bravo(b)	
		//This is just a shortcut. Assigning the values alpha and bravo to a and b from the constructor
		{}
		void printAB()
		{
			cout<<alpha<<endl<<bravo<<endl;	
			//prints alpha and bravo on seperate lines.
			//remember cout does the same as printf, just in a different way.
		}
};

//template specialization
template<> class TemplateClass<char>
{
	private:
		char character;
	public:
		TemplateClass (char c)
		:	character(c)
		{
			cout<<"called constructor for specialized template Char" <<endl;
		}
};



int main()
{
	printf("Sum of 2+2 using templates: %d\n", sum(2,2));
	printf("Sum of 2.5+3.0 using templates: %f\n", sum(2.5,3.0));
	
	printf("Multiply 2.5*3 using diff datatypes: %f\n", multiply(2.5,3));
	
	//we have to declare the type of template we are passing through though
	//since we are passing doubles, we must put doubles inside <>
	TemplateClass<double> *t = new TemplateClass<double>(1.0,2.5);
	t -> printAB();
	delete t;


	//this is the specialized class
	TemplateClass<char> *c = new TemplateClass<char>('a');
	delete c;


	//now, lets get to some of the last things you may want to know that may actually be useful.
	//In almost all programming languages, a switch statement is available.
	//Switch statements allow us to pass in a numeric value and map it to a table of code.
	//Think of it like you have a bunch of mailboxes, and have a key with a number printed on it. You take that key to the mailbox with the corresponding number. You don't go through each mailbox to check if the contents are yours. It sorta acts like a bunch of if else statements, but it is NOT the same
	char in = 'a';
	//int in = 97;	
	////these above two are interchangable. switch passes 97 as the case for both.
	
	switch (in)	
	//we can only pass in a numeric value, characters work because they are ascii numbers
	{
		case 1:
			printf("case 1\n");
			break;	//you need to tell the program to break or else it runs thru all the below cases.
		case 2:
			printf("case 2\n");
			break;
		case 'a':	//'a' the char is equivalent to 97
			printf("case a reached\n");
			break;
		default:
			printf("default\n");	//this is reached when none of the conditions apply
			break;
	}

	return 0;
}
