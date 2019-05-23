#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	
using namespace std;

template<class T> T sum(T a, T b)
{
	return a+b;
}

template<class T, class T2> T multiply(T a, T2 b)
{
	return a*b;
}

template<class T> class TemplateClass
{
	private:
		T alpha, bravo;
	public:
		TemplateClass(T a, T b) : alpha(a), bravo(b)	
		{}
		void printAB()
		{
			cout<<alpha<<endl<<bravo<<endl;	
		}
};

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
	
	TemplateClass<double> *t = new TemplateClass<double>(1.0,2.5);
	t -> printAB();
	delete t;


	TemplateClass<char> *c = new TemplateClass<char>('a');
	delete c;


	char in = 'a';
	//int in = 97;	
	
	switch (in)	
	{
		case 1:
			printf("case 1\n");
			break;	
		case 2:
			printf("case 2\n");
			break;
		case 'a':	
			printf("case a reached\n");
			break;
		default:
			printf("default\n");	
			break;
	}

	return 0;
}
