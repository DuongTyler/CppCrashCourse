//now that you have written your first program, let's get a bit more complicated
/*
 * IN THIS LESSON:	
 * 	Datatypes
 * 	Arrays
 * 	Getting input
 * 	Conditionals
 * 	For-loops
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <string>	//String is another library you must include for strings.

int main()
{
	//just like in java, we have datatypes with the same names
	int a = 1;
	double b= 1.0;
	float c = 1.0f;
	char d = 'a';
	bool e = true;    // 'bool' stands for 'boolean'
	std::string str = "";	// If we do not include 'using namespace std' at the top of the file, we must append 'std::' before the non-primitive standard datatypes. removing the 'std::' and adding 'using namespace std' at the top would have the same effect.
	//and we can have arrays (of any datatype)
	int arr[] = {0,1,2,3};

	//for-loops work the same way as in java, as well as if-statements. However, strings are different. There is no String.equals() function in c++; instead, you can just use the == operator
	if (str == str)		printf("str does indeed equal str\n");

	//we cast datatypes just like in java
	std::cout<< "Cast 1.5 to an int: "<< (int)1.5 << std::endl;
	//if 'std::cout' looks scary, don't worry. It's the c++ way of doing System.out.println();
	
	//ASSIGNMENT: so now that we know how to compare things, loop through the array 'arr' and only print odd numbers. You can use cout or printf().

	return 0;
}
